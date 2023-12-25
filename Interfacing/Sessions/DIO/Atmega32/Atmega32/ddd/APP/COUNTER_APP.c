#include "COUNTER_APP.h"

int ctr = 0;
int x = 0;
	
void Counter_App_Init(void)
{
	//DIO_SetPinDir(DIO_PORTD,P3,OUTPUT);
	//DIO_SetPinDir(DIO_PORTC,P2,OUTPUT);
	//DIO_SetPinDir(DIO_PORTC,P7,OUTPUT);
	
	DIO_SetPinDir(DIO_PORTA,P4,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,P5,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,P6,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,P7,OUTPUT);
	
	DIO_SetPinDir(DIO_PORTB,P0,INPUT);
	DIO_SetPinDir(DIO_PORTD,P6,INPUT);
	DIO_SetPinDir(DIO_PORTD,P2,INPUT);
	
	DIO_SetPinDir(DIO_PORTB,P1,OUTPUT);
	DIO_SetPinDir(DIO_PORTB,P2,OUTPUT);
	
	//DIO_SetPinState(DIO_PORTB,P1,HIGH);
	//DIO_SetPinState(DIO_PORTB,P2,HIGH);
	
}

void Counter_App_Start(void)
{
	//_delay_ms(200);
	
	//DIO_SetPinState(DIO_PORTD,P3,HIGH);
	//_delay_ms(250);
	//DIO_SetPinState(DIO_PORTC,P7,HIGH);
	//_delay_ms(250);
	//DIO_SetPinState(DIO_PORTC,P2,HIGH);
	//_delay_ms(250);
	//
	//DIO_SetPinState(DIO_PORTD,P3,LOW);
	//_delay_ms(250);
	//DIO_SetPinState(DIO_PORTC,P7,LOW);
	//_delay_ms(250);
	//DIO_SetPinState(DIO_PORTC,P2,LOW);
	//_delay_ms(250);
	
	//DIO_TogPinState(DIO_PORTD,P3);
	//_delay_ms(250);
	//DIO_TogPinState(DIO_PORTC,P7);
	//_delay_ms(250);
	//DIO_TogPinState(DIO_PORTC,P2);
	//_delay_ms(250);
	
	//if(DIO_GetPinState(DIO_PORTB,P0) == HIGH)
	if(IS_HIGH(PINB,P0))
	{
		_delay_ms(100);
		if(IS_HIGH(PINB,P0))
		{
			ctr = 0;
		}
	}
	//if(DIO_GetPinState(DIO_PORTD,P6) == HIGH)
	if(IS_HIGH(PIND,P6))
	{
		_delay_ms(100);
		if(IS_HIGH(PIND,P6))
		{
			ctr++;
		}
	}
	//if(DIO_GetPinState(DIO_PORTD,P2) == HIGH)
	if(IS_HIGH(PIND,P2))
	{
		_delay_ms(100);
		if(IS_HIGH(PIND,P2))
		{
			ctr--;
		}
	}
	
	DIO_SetPinState(DIO_PORTB,P1,LOW);
	DIO_SetPinState(DIO_PORTB,P2,HIGH);
	PORTA = ((ctr/10)<<4);
	_delay_ms(2);
	
	DIO_SetPinState(DIO_PORTB,P1,HIGH);
	DIO_SetPinState(DIO_PORTB,P2,LOW);
	PORTA = ((ctr%10)<<4);
	_delay_ms(2);
}