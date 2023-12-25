/*
 * DIO_interface.h
 *
 * Created: 9/16/2022 9:02:25 PM
 *  Author: En.EslamEid
 */ 





  
	


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_private.h"


typedef enum{DIO_PORTA,DIO_PORTB,DIO_PORTC,DIO_PORTD} PORT_TYPE ;
	
typedef enum{LOW,HIGH,INPUT,OUTPUT} MODE_TYPE;
typedef enum {Pin0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7} PIN_TYPE;



void DIO_SetPinDir(PORT_TYPE,PIN_TYPE, MODE_TYPE );
void DIO_SetPinValue(PORT_TYPE,PIN_TYPE, MODE_TYPE );


u8  DIO_GetPinValue(PORT_TYPE,PIN_TYPE );

void DIO_SetInputPullUp(PORT_TYPE,PIN_TYPE);

void DIO_TogglePinValue(PORT_TYPE,PIN_TYPE );




#endif /* DIO_INTERFACE_H_ */