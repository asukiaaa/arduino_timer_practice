#include <Arduino.h>

#define OUTPUT_PIN 5

void setup() {
  tone(OUTPUT_PIN, 2500); // (1(1sec) / 0.0002(200us)) / 2 = 2500Hz
}

void loop() {
  delay(1000);
}
