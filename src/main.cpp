#include <Arduino.h>

#define LED_PWM 13
#define S_1 62
#define S_2 63
#define LED_1 66
#define GIRA 54

uint8_t duty=0;	// duty cycle in %
uint8_t valore_pwm;	// valore da inviare al pin
uint32_t tempo;

void setup() 
{
	pinMode(LED_PWM,OUTPUT);
	pinMode(LED_1,OUTPUT);
	pinMode(GIRA,OUTPUT);
}

void loop() 
{
	digitalWrite(LED_1,1);
	digitalWrite(LED_1,0);
	uint8_t tasto_1,tasto_2;
	tasto_1=digitalRead(S_1);
	tasto_2=digitalRead(S_2);
	if ((tasto_1==0)&&(duty<100))
	{
		duty=duty+10;
		valore_pwm=duty*255/100;
		analogWrite(LED_PWM,valore_pwm);
		delay(2000);
	}
	if (tasto_2==0)
	{
		if(millis()>(tempo+2000))
		{
			if (duty>0)
			{
				duty=duty-10;
				valore_pwm=duty*255/100;
			}
			analogWrite(LED_PWM,valore_pwm);
			tempo=millis();
		}
	}
}