/*
 * SERVO.c
 *
 * Created: 3/2/2022 6:19:47 PM
 *  Author: EN.ESLAM EID
 */ 

#include "SERVO.h"

void Servo_Init()
{
	
	DDRD |= (1<<5);	

	TCNT1 = 0;		
	ICR1H =0x13;	
	ICR1L =0x87;


	
	TCCR1A = (1<<WGM11) | (1<<COM1A1);


	TCCR1B = (1<<WGM12) | (1<<WGM13) | (1<<CS10) | (1<<CS11);
}

void Servo(Uint8 value){

OCR1A = (value * 251 /90 +248); /* Set the compare value */

}


