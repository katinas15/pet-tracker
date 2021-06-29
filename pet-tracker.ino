#include <Arduino.h>

const int pin = PB0;

void setup() {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  Serial.begin(9600);
}

void loop() {
  Serial.println("test");
}
