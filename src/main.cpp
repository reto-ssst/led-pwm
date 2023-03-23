#include <Arduino.h>

#define LED_PWM 13
#define S_1 62
#define LED_1 66

int8_t duty=50;	// duty cycle in %
int8_t valore_pwm;	// valore da inviare al pin

void setup() 
{
	pinMode(LED_PWM,OUTPUT);
	pinMode(LED_1,OUTPUT);
	valore_pwm=duty*255/100;
	analogWrite(LED_PWM,valore_pwm);
}

void loop() 
{
	digitalWrite(LED_1,1);
}