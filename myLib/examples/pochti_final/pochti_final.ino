#include <mylib.h>

void setup() {
  Serial.begin(9600);
    digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
}

void loop() {
  blinkLED(13, 1000);
  Temper(0, 25, 3, 4);
}
