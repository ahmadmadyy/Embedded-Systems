/*
 * devices_control.c
 *
 * Created: 3/3/2022 2:36:05 PM
 *  Author:EN.ESLAM EID
 */ 
#include "devices_control.h"


void RELAY(Uint8 state){
	

	DIO_SetPinVal(DIO_PORTA, RELAY_PIN , state);
	
}



void LIGHT_INIT(){
	

	DIO_SetPinDir(DIO_PORTD, DIO_PIN_3 , DIO_PIN_OUT);
	DIO_SetPinDir(DIO_PORTC, DIO_PIN_2 , DIO_PIN_OUT);
	DIO_SetPinDir(DIO_PORTC, DIO_PIN_7 , DIO_PIN_OUT);
	
}
void LIGHT(Uint8 state){

	DIO_SetPinVal(DIO_PORTD, DIO_PIN_3 , state);
	DIO_SetPinVal(DIO_PORTC, DIO_PIN_2 , state);
	DIO_SetPinVal(DIO_PORTC, DIO_PIN_7 , state);

}


void DOOR(Uint8 state){
	
	if(state==CLS){
		
	Servo(90);
			
		
	}
	else if(state==OPN){
	Servo(0); 
		
	}
}

Uint8 TEMP_READ(){
	
	 Sensor_read += ADC_Read(ADC_PIN_0)/3;
	 Sensor_read += ADC_Read(ADC_PIN_0)/3;
	 Sensor_read += ADC_Read(ADC_PIN_0)/3;
	 Sensor_read += ADC_Read(ADC_PIN_0)/3;
	 Sensor_read/=5;
	
	return Sensor_read;
}