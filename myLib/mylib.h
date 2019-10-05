
#ifndef MYLIB_H//Begin bib
#define MYLIB_H//Name bib
#include "Arduino.h"//подключение библиотеки 
void Temper(int minT, int maxT, int pin, int pinVent1);
void Lampa(int svet ,int pin,int pinLampa1,int pinLampa2) ;
void Lampachik(int pin,int garL,int noGarL,int pinLampa3);
void Poliv(int time,int pin,int polivPin1,int polivPin2,int polivPin3);
void Start ();
void Name ();
void tempera(int color,int temp );
void Pressure(int color,int dav );
void minT (int color );
void maxT (int color );
#endif//end bib
