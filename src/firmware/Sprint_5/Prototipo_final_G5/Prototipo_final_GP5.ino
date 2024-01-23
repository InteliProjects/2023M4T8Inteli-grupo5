#include <WiFi.h> // Biblioteca para WiFi (Versão 0.0.3)
#include <PubSubClient.h> // Biblioteca para MQTT (Versão 0.1.0)
#include <TinyGPS++.h> // Biblioteca para GPS (Versão 0.04)

// Inserir o código do ativo
String codigo_ativo = "A1B2C3RNP";

// Configurações de rede WiFi e MQTT
const char* ssid = "Ever"; // SSID da rede WiFi
const char* password = "bruno000"; // Senha da rede WiFi
const char* mqtt_server = "broker.hivemq.com"; // Servidor MQTT
const char* mqtt_topic = "INTELI-RNP-M4T08-GP5"; // Tópico MQTT

// Constantes para configuração do módulo GPS
const uint32_t GPSBaudRate = 9600; // Taxa de baud do GPS
const int RXPin = 16, TXPin = 17; // Pinos RX e TX para o GPS

// Definição do pino do LED
const int LEDPin = 25;

WiFiClient espClient;
PubSubClient mqttClient(espClient);
TinyGPSPlus gps;
HardwareSerial GPSSerial(1); // Objeto Serial para comunicação com o GPS

String messageTemp; // Armazena temporariamente as mensagens recebidas via MQTT
bool gpsEnabled = false; // Variável para controlar o estado do GPS

// Função para configurar a conexão WiFi
void setup_wifi() {
  Serial.println("Conectando ao WiFi");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConectado. IP: " + WiFi.localIP().toString());
}

// Função de callback para tratar mensagens MQTT recebidas
void callback(char* topic, byte* message, unsigned int length) {
  Serial.print("Mensagem no tópico: ");
  Serial.println(topic);

  messageTemp = String((char*)message, length);
  Serial.println("Mensagem: " + messageTemp);

  if (messageTemp == codigo_ativo + ",GPS-ON") {
    gpsEnabled = true;
    digitalWrite(LEDPin, HIGH); // Acende o LED
    Serial.println("GPS Ligado");
    publishGPSData(); // Publica os dados do GPS após ligá-lo
  } else if (messageTemp == codigo_ativo + ",GPS-OFF") {
    publishGPSData(); // Publica os dados do GPS antes de desligá-lo
    gpsEnabled = false;
    digitalWrite(LEDPin, LOW); // Apaga o LED
    Serial.println("GPS Desligado");
  }
}

// Função para reconectar ao servidor MQTT, se a conexão for perdida
void reconnect() {
  while (!mqttClient.connected()) {
    Serial.print("Conectando ao MQTT...");
    if (mqttClient.connect("ESP32Client")) {
      Serial.println("Conectado");
      mqttClient.subscribe(mqtt_topic);
    } else {
      Serial.print("Falha, rc=" + String(mqttClient.state()) + " tentando novamente em 3s.");
      delay(3000);
    }
  }
}

// Função para publicar dados de localização do GPS no tópico MQTT
void publishGPSData() {
  if (!gpsEnabled) return;

  if (gps.location.isValid()) {
    String gpsData = String(codigo_ativo) + "," + String(gps.location.lat(), 6) + "," + String(gps.location.lng(), 6);
    mqttClient.publish(mqtt_topic, gpsData.c_str());
  } else {
    mqttClient.publish(mqtt_topic, "Aguardando sinal do GPS");
  }
}

// Função para imprimir dados de localização do GPS no monitor serial
void printGPSData() {
  if (!gpsEnabled) return;

  if (gps.location.isValid()) {
    Serial.println("Latitude: " + String(gps.location.lat(), 6) + ", Longitude: " + String(gps.location.lng(), 6));
  } else {
    Serial.println("Aguardando sinal do GPS...");
  }
}

void setup() {
  Serial.begin(115200); // Inicializa a comunicação serial
  setup_wifi(); // Configuração da rede WiFi
  pinMode(LEDPin, OUTPUT); // Configuração do pino do LED
  mqttClient.setServer(mqtt_server, 1883); // Configuração do servidor MQTT
  mqttClient.setCallback(callback); // Configuração da função de callback MQTT
  GPSSerial.begin(GPSBaudRate, SERIAL_8N1, RXPin, TXPin); // Inicialização da comunicação com o GPS
}

void loop() {
  if (!mqttClient.connected()) {
    reconnect(); // Reconexão ao servidor MQTT
  }
  mqttClient.loop();

  static unsigned long lastSendTimeMQTT = 0;
  if (millis() - lastSendTimeMQTT > 10000) {
    lastSendTimeMQTT = millis();
    publishGPSData(); // Publica dados do GPS a cada 10 segundos
  }

  static unsigned long lastPrintTimeGPS = 0;
  if (millis() - lastPrintTimeGPS > 10000) {
    lastPrintTimeGPS = millis();
    printGPSData(); // Exibe dados do GPS a cada 10 segundos
  }

  while (GPSSerial.available() > 0) {
    gps.encode(GPSSerial.read()); // Processa os dados recebidos do GPS
  }
}
