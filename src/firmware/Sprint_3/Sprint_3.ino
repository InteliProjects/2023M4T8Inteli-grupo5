#include <WiFi.h>
#include <PubSubClient.h>
#include <LiquidCrystal_I2C.h>
#include <TinyGPS++.h>
#include <Wire.h>

// Configurações de WiFi
const char* ssid = "Ever";         // SSID da sua rede WiFi
const char* password = "bruno000"; // Senha da sua rede WiFi

// Configurações do MQTT
const char* mqtt_server = "broker.hivemq.com"; // Endereço do servidor MQTT
const char* mqtt_topic = "brunaosupimbauai222"; // Tópico MQTT para publicação

WiFiClient espClient;
PubSubClient client(espClient);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Configuração do display LCD
TinyGPSPlus gps;
HardwareSerial GPSSerial(1); // Configuração da comunicação serial com o módulo GPS

String messageTemp;  // Variável para armazenar a mensagem MQTT recebida

void setup_wifi() {
  delay(10);
  Serial.println("Conectando ao WiFi");
  WiFi.begin(ssid, password);

  // Aguarda a conexão com a rede WiFi
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Conectado ao WiFi");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());
}

void callback(char* topic, byte* message, unsigned int length) {
  Serial.print("Mensagem recebida no tópico: ");
  Serial.println(topic);
  Serial.print("Mensagem:");

  messageTemp = "";

  // Converte a mensagem recebida em uma String
  for (int i = 0; i < length; i++) {
    messageTemp += (char)message[i];
  }
  Serial.println(messageTemp);

  int commaIndex = messageTemp.indexOf(',');

  // Se a mensagem contiver uma vírgula, divide-a em duas partes e exibe no LCD
  if (commaIndex != -1) {
    String firstPart = messageTemp.substring(0, commaIndex);
    String secondPart = messageTemp.substring(commaIndex + 1);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(firstPart); 
    lcd.setCursor(0, 1);
    lcd.print(secondPart); 
  } else {
    // Se não houver vírgula na mensagem, exibe a mensagem completa no LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(messageTemp);
  }
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Conectando ao servidor MQTT...");
    if (client.connect("ESP32Client")) {
      Serial.println("conectado");
      client.subscribe(mqtt_topic);
    } else {
      Serial.print("falha, rc=");
      Serial.print(client.state());
      Serial.println(" tentando novamente em 3 segundos");
      delay(3000);
    }
  }
}

void setup() {
  Serial.begin(115200);  // Inicializa a comunicação serial
  Wire.begin(4, 15);     // Inicializa a comunicação I2C
  lcd.begin();           // Inicializa o display LCD

  lcd.backlight();       // Liga a luz de fundo do LCD
  pinMode(25, OUTPUT);   // Configura o pino 25 como saída
  setup_wifi();          // Função para conectar ao WiFi
  client.setServer(mqtt_server, 1883);  // Configura o cliente MQTT
  client.setCallback(callback);         // Configura a função de callback para mensagens MQTT
  GPSSerial.begin(9600, SERIAL_8N1, 16, 17);  // Inicializa a comunicação com o módulo GPS
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  // Publica dados GPS no servidor MQTT a cada 10 segundos
  static unsigned long lastSendTimeMQTT = 0;
  if (millis() - lastSendTimeMQTT > 10000) {
    lastSendTimeMQTT = millis();
    if (gps.location.isValid()) {
      // Obtém as coordenadas GPS e publica no tópico MQTT
      String gpsData = String(gps.location.lat(), 6) + "," + String(gps.location.lng(), 6);
      client.publish(mqtt_topic, gpsData.c_str());
    } else {
      // Se o sinal GPS não estiver disponível, publica uma mensagem de espera
      client.publish(mqtt_topic, "Aguardando sinal do GPS");
    }
  }

  // Exibe dados GPS no monitor serial a cada 3 segundos
  static unsigned long lastPrintTimeGPS = 0;
  if (millis() - lastPrintTimeGPS > 3000) {
    lastPrintTimeGPS = millis();
    if (gps.location.isValid()) {
      Serial.print("Latitude: ");
      Serial.print(gps.location.lat(), 6);
      Serial.print(", Longitude: ");
      Serial.println(gps.location.lng(), 6);
    } else {
      Serial.println("Aguardando sinal do GPS...");
    }
  }

  // Lê dados do módulo GPS
  while (GPSSerial.available() > 0) {
    gps.encode(GPSSerial.read());
  }

  // Controla o estado do pino 25 com base na mensagem MQTT recebida
  if (messageTemp == "ON") {
    digitalWrite(25, HIGH);  // Liga o pino 25
  } else if (messageTemp == "OFF") {
    digitalWrite(25, LOW);   // Desliga o pino 25
  }
}
