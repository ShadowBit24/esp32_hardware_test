#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("\n\n=================================");
  Serial.println("   ESP32 HARDWARE TEST PASSED    ");
  Serial.println("=================================");
}

void loop() {
  Serial.println("ESP32 is alive!");
  delay(1000);
}