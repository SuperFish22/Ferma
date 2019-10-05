
#include <mylib.h>

int temp = 10;
int dav = 30;
int temCol = 1;
int davCol = 0;
int minCol = 0;
int maxCol = 0;
int i = 0;


void setup() {
  Serial.begin(9600);
  Start();
  pinMode(A5,INPUT);
}
uint32_t myTimer1;
void loop() {

  if (millis() - myTimer1 >= 5000 ) {   // ищем разницу
    myTimer1 = millis();              // сброс таймера
    // выполнить действие
    i = i + 1;
  }
  if (i == 6)
  { i = 0;
  }

  switch (i) {
    case 1:
      temCol = 0;
      minCol = 1;
      davCol = 0;
      break;

    case 2:
      temCol = 0;
      minCol = 0;
      maxCol = 1;
      davCol = 0;

      break;

    case 3:
      temCol = 0;
      minCol = 0;
      maxCol = 0;
      davCol = 1;
      break;

    case 4:
      temCol = 1;
      minCol = 0;

      davCol = 0;
      i = 0;
      break;
  }
  Name();
  tempera(temCol, temp);
  minT (minCol ); maxT(maxCol);
  Pressure(davCol, dav );
int a = digitalRead(A5);
Serial.println(a);
}
