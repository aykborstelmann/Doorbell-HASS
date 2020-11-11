#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include "secrets.h"

void setup() {
    Serial.begin(115200);

    Serial.print("Connecting to WIFI");
    WiFi.begin(SECRET_SSID, SECRET_PASS);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.printf("Connection established, IP address %s\n", WiFi.localIP().toString().c_str());
}

void loop() {
    if (WiFi.status() == WL_CONNECTED) {
        WiFiClient client;
        HTTPClient httpClient;

        Serial.println("[HTTP] begin");
        httpClient.begin("");
    }
}