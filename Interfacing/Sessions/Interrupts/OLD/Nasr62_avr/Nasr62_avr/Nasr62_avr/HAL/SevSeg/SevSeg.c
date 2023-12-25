/*
 * SevSeg_prog.c
 *
 * Created: 10/7/2023 9:07:27 PM
 *  Author: En.EslamEid
 */ 

#include "SevSeg.h"


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