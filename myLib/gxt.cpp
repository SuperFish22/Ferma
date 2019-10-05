#include "Adafruit_GFX.h"
#include "MCUFRIEND_kbv.h"
#include "mylib.h"
#include "Arduino.h"
#define BLACK 0x0000
#define WHITE 0xFFFF
#define BLUE 0x001F

MCUFRIEND_kbv tft(A3, A2, A1, A0, A4);
void Start ()
{
	uint16_t ID = tft.readID();
	tft.begin(ID);
  tft.fillScreen(BLACK); //fillScreen(uint16_t t);

}
void Name ()
{  tft.setRotation(1);
	tft.setCursor(60, 1);
	tft.setTextSize(4);
	tft.setTextColor(WHITE, BLACK );
	tft.println("GameBox_Ferma");
	tft.setTextSize(3);
}

void tempera(int color,int temp )
{
	if (color == 1) {
		tft.setTextColor(BLACK, WHITE);
		tft.print("Temperature :"); tft.println(temp);
	}
	if (color == 0) {
		tft.setTextColor(WHITE, BLACK );
		tft.print("Temperature :"); tft.println(temp);
	}
}

void Pressure(int color,int dav )
{
	if (color == 1) {
		tft.setTextColor(BLACK, WHITE);
		tft.print("Pressure :"); tft.println(dav);
	}
	if (color == 0) {
		tft.setTextColor(WHITE, BLACK );
		tft.print("Pressure :"); tft.println(dav);
	}
}

void minT (int color )
{
	if (color == 1) {
		tft.setTextSize(2);
		tft.setTextColor(BLACK, WHITE);
		tft.print("minTemperature ="); tft.print("10");
		tft.setTextSize(4);
	}
	if (color == 0) {
		tft.setTextSize(2);
		tft.setTextColor(WHITE, BLACK);
		tft.print("minTemperature ="); tft.print("10"); 
		tft.setTextSize(4);
	}
}

void maxT (int color )
{
	if (color == 1) {
		tft.setTextSize(2);
		tft.setTextColor(BLACK, WHITE);
		tft.print("    maxTemperature ="); tft.println("10");
		tft.setTextSize(4);
	}
	if (color == 0) {
		tft.setTextSize(2);
		tft.setTextColor(WHITE, BLACK);
		tft.print("    maxTemperature ="); tft.println("10");
		tft.setTextSize(4);
	}
}