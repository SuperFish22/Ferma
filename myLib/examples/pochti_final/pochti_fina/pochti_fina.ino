#include <mylib.h>

void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}

void loop() {
  //Temper(0, 25, 3, 4);
  Lampa(500, A1, 6, 7);
  Lampachik(A1,2000,4000,8);
  //Poliv(10000,);
  
}
