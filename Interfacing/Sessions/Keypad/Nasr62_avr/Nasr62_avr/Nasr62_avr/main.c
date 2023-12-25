						 /*
 * COUNTER_APP.h
 *
 * Created: 9/30/2023 11:23:53 AM
 *  Author: En.EslamEid
 */ 


/*
* main.c
*
* Created: 9/29/2023 2:16:12 PM
*  Author: En.EslamEid
*/

#include "KP_int.h"

void SEVSEG_init();
void SEVSEG_Display(u8 num);


int main(void)
{

KP_init();
SEVSEG_init();
	while(1)
	{
		
		u8 key = KP_GetKey();
		
		if (key != NO_KEY)
		{
			SEVSEG_Display(key);
			key=NO_KEY;
		}
		
	}
}

void SEVSEG_init(){
	
		DIO_SetPinDir(DIO_PORTA,Pin4,OUTPUT);
		DIO_SetPinDir(DIO_PORTA,Pin5,OUTPUT);
		DIO_SetPinDir(DIO_PORTA,Pin6,OUTPUT);
		DIO_SetPinDir(DIO_PORTA,Pin7,OUTPUT);
		
		DIO_SetPinDir(DIO_PORTB,Pin1,OUTPUT);//En2
		DIO_SetPinDir(DIO_PORTB,Pin2,OUTPUT);//En1
	
}


void SEVSEG_Display(u8 num){
	
	
for (u8 i=0;i<20;i++)
{
	
	
	DIO_SetPinValue(DIO_PORTB,Pin1,LOW);//En2
	DIO_SetPinValue(DIO_PORTB,Pin2,HIGH);//En1
	
	PORTA=(num/10)<<4;
	_delay_ms(2);
	
	DIO_SetPinValue(DIO_PORTB,Pin1,HIGH);//En2
	DIO_SetPinValue(DIO_PORTB,Pin2,LOW);//En1
	
	PORTA=(num%10)<<4;
	_delay_ms(2);
	
}
}