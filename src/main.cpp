#include <Arduino.h>
#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(100);

  // Perform WiFi scan
  int networksFound = WiFi.scanNetworks();

  if (networksFound == 0) {
    Serial.println("No networks found");
  } else {
    Serial.println("Networks found:");
    for (int i = 0; i < networksFound; ++i) {
      Serial.println(WiFi.SSID(i));
    }
  }
}

void loop() {
  // No additional code in the loop
}

