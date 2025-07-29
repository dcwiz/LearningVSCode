#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Initialize pin 13 (LED) as output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn LED on
  delay(250);                     // Wait 1 second
  digitalWrite(LED_BUILTIN, LOW);  // Turn LED off
  delay(250);                     // Wait 1 second
}