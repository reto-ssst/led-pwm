#include <Arduino.h>

#define LED 13

void setup() 
{
	pinMode(LED,OUTPUT);
}

void loop() 
{
	digitalWrite(LED,1);
	digitalWrite(LED,0);
}