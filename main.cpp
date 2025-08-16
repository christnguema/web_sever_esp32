#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>
#include <SPIFFS.h>
#include <WiFi.h>

const char* ssid = "christ_esp32";
const char* password = "123456789";

const int led = 2; // GPIO pin for the LED
const int capteurLuminosite = 34; // GPIO pin for the light sensor

AsyncWebServer server(80);


void setup() {
  //----------------------------------------Serial
  Serial.begin(115200);
  while (!Serial) {}; // Wait for Serial to be ready
  Serial.println("\n");
  //----------------------------------------GPIO
  pinMode(led, OUTPUT); // Set the LED pin as output
  digitalWrite(led, LOW); // Turn off the LED initially
  pinMode(capteurLuminosite, INPUT); // Set the light sensor pin as input
  //-------------------------------SPIFFS
  if (!SPIFFS.begin(true)) {
    Serial.println("SPIFFS Mount Failed.........");
    return;
  }
  File root = SPIFFS.open("/");
  File file = root.openNextFile();
  while (file) {
    Serial.print("File: ");
    Serial.println(file.name());
    file.close();
    // Open the next file in the root directory
    file = root.openNextFile();
  }
  //-----------------------------------------WiFi
  WiFi.begin(ssid, password);
  //  WiFi.mode(WIFI_AP);
  // WiFi.softAP(ssid, password);

  Serial.print("Connecting to WiFi");
  // Wait for the WiFi connection to be established
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
  //-------------------------------Web Server
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/index.html", "text/html");
  });

  server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/style.css", "text/css");
  });

  server.on("/script.js", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/script.js", "application/javascript");
  });

  server.on("/led/on", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(led, HIGH); // Turn on the LED
    request->send(200, "text/plain", "LED is ON");
  });

  server.on("/led/off", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(led, LOW); // Turn off the LED
    request->send(200, "text/plain", "LED is OFF");
  });

  server.on("/luminosity", HTTP_GET, [](AsyncWebServerRequest *request){
    int luminosity = analogRead(capteurLuminosite); // Read the light sensor value
    String response = "Luminosity: " + String(luminosity);
    request->send(200, "text/plain", response);
  });

    server.on("/on", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(led, HIGH); // Turn on the LED
    request->send(200, "text/plain", "LED is ON");
  });  

  server.on("/off", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(led, LOW); // Turn off the LED
    request->send(200, "text/plain", "LED is OFF");
  });

  server.begin(); // Start the web server
  Serial.println("Web server started");
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

