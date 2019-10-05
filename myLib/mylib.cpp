    #include "Arduino.h"
	#include "DHT.h"
	#include "mylib.h"

void Temper(int minT, int maxT, int pin, int pinVent1)
{
	pinMode(pinVent1,OUTPUT);

	DHT dht(pin, DHT22); 
	dht.begin();
	float h = dht.readHumidity();
	float t = dht.readTemperature();
	if (isnan(h) || isnan(t) ) 
	{
		Serial.println(F("Failed to read from DHT sensor!"));
		return;
	}
	else{
		Serial.print("Humidity: ");
		Serial.print(h);
		Serial.print("%  Temperature: ");
		Serial.print(t);
		Serial.println("°C ");
	}
	if(minT < t && t < maxT)
	{
		digitalWrite(pinVent1,LOW);

	}
	if(t > maxT || t < minT)
	{
		
		digitalWrite(pinVent1,HIGH);
	}
}
void Lampachik(int pin,int garL,int noGarL,int pinLampa3)
{
	int iar = analogRead(pin);
	//if (iar==1 || iar==0 ){Serial.println("Failed to read from eror svet");} 
	//	else{
  uint32_t myTimer1, myTimer2;
 if (millis() - myTimer1 >= garL ) {   // ищем разницу
    myTimer1 = millis();              // сброс таймера
    // выполнить действие
    digitalWrite(pinLampa3, LOW);
}
  if (millis() - myTimer2 >= noGarL) {   // ищем разницу
  	digitalWrite(pinLampa3, HIGH);
    myTimer2 = millis();              // сброс таймера
    // выполнить действие 2
    // 3 раза в секунду
}

//}
}
void Lampa (int svet ,int pin,int pinLampa1,int pinLampa2) {
	int iar = analogRead(pin);
	if (iar==1 || iar==0 ){Serial.println("Failed to read from eror svet");} 
		else{
			if (iar < svet ) {

				digitalWrite(pinLampa1, HIGH);
				digitalWrite(pinLampa2, HIGH);
			}
			else {
				digitalWrite(pinLampa1, LOW);
				digitalWrite(pinLampa2, LOW);
			}
		}
	}
	void Poliv(int time,int pin,int polivPin1,int polivPin2,int polivPin3)
	{uint32_t myTimer1,myTimer2;
		int i =	analogRead(pin);
 if (millis() - myTimer1 >= time) {   // ищем разницу
 	digitalWrite(polivPin1, LOW);
 	digitalWrite(polivPin2, LOW);
 	digitalWrite(polivPin3, LOW);
 	myTimer2 = millis(); 
 }
 if (i>10)
 {
 	digitalWrite(polivPin1, HIGH);
 	digitalWrite(polivPin2, HIGH);
 	digitalWrite(polivPin3, HIGH);
 }
}
