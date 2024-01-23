#include <WiFi.h>
#include <TinyGPS++.h>

// Substitua com seus próprios detalhes de rede
const char* ssid     = "Inteli-welcome";
const char* password = "";

// Definindo as portas dos LEDs
const int ledWifi = 12;
const int ledGPS = 14;
const int ledDatabase = 27;

// Inicializa o TinyGPS++
TinyGPSPlus gps;

// Defina os pinos de RX e TX usados para conectar ao módulo GPS
const int GPS_RX_PIN = 16;
const int GPS_TX_PIN = 17; 

// Inicializa a Serial para GPS
HardwareSerial SerialGPS(1); // Use UART1

// Timeout para a conexão GPS 
const unsigned long GPS_TIMEOUT = 5000; // 5 segundos

// Variável para rastrear a última vez que recebemos dados válidos do GPS
unsigned long lastGPSTime = 0;

void setup() {
  Serial.begin(115200);
  SerialGPS.begin(9600, SERIAL_8N1, GPS_RX_PIN, GPS_TX_PIN);

  // Inicializa os LEDs
  pinMode(ledWifi, OUTPUT);
  pinMode(ledGPS, OUTPUT);
  pinMode(ledDatabase, OUTPUT);

  // Conectar ao WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Conectando ao WiFi...");
  }
  digitalWrite(ledWifi, HIGH); // Acende o LED do WiFi

  // Simula um banco de dados ativo
  digitalWrite(ledDatabase, HIGH);
  Serial.println("Simulando operações de banco de dados...");
}

void loop() {
  while (SerialGPS.available() > 0) {
    if (gps.encode(SerialGPS.read())) {
      if (gps.location.isValid()) {
        // GPS fix conseguido, acende o LED e atualiza o tempo
        digitalWrite(ledGPS, HIGH);
        lastGPSTime = millis();

        
        Serial.print("Latitude: "); Serial.println(gps.location.lat(), 6);
        Serial.print("Longitude: "); Serial.println(gps.location.lng(), 6);
      }
    }
  }

  // Verifica se o GPS está sem fix por mais tempo do que o definido em GPS_TIMEOUT
  if (millis() - lastGPSTime > GPS_TIMEOUT) {
    // Sem GPS fix por mais tempo que o timeout, apaga o LED
    digitalWrite(ledGPS, LOW);
  }
}