#include "Adafruit_GFX.h"
#include "MCUFRIEND_kbv.h"
#define BLACK 0x0000
#define WHITE 0xFFFF
MCUFRIEND_kbv tft(A3, A2, A1, A0, A4);
int temp = 10;
int dav = 30;
void tempera(){}
void setup() {
  uint16_t ID = tft.readID();
  tft.begin(ID);
  tft.fillScreen(BLACK); //fillScreen(uint16_t t);
}
int i;
void loop() {
  tft.setRotation(1);
  tft.setCursor(60, 1);
  tft.setTextSize(4);
  tft.println("GameBox_Ferma");
  tft.setTextSize(3);
  tft.setTextColor(BLACK, WHITE);
  tft.print("Temperature :"); tft.println(temp);
  tft.print("Pressure :"); tft.println(dav);
}
