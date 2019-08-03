#include <Arduino.h>
#include <FlexiTimer2.h>

#define OUTPUT_PIN 5

void flash() {
  static boolean pinState = true;
  pinState = !pinState;
  digitalWrite(OUTPUT_PIN, pinState);
}

void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);
  FlexiTimer2::set(2, 1.0/10000, flash);
  FlexiTimer2::start();
}

void loop() {
  delay(1000);
}
