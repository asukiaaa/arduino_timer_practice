#include <Arduino.h>

#define OUTPUT_PIN 5

void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);
}

unsigned long waitMicroSec = 200;

void loop() {
  digitalWrite(OUTPUT_PIN, HIGH);
  delayMicroseconds(waitMicroSec);
  digitalWrite(OUTPUT_PIN, LOW);
  delayMicroseconds(waitMicroSec);
}
