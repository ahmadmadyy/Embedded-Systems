#include "DIO_int.h"


void DIO_SetPinDir(port_type port, pin_type pin, dir_type dir)
{
	switch(port)
	{
		case DIO_PORTA : (dir==OUTPUT) ? SET_BIT(DDRA,pin):CLEAR_BIT(DDRA,pin);break;
		case DIO_PORTB : (dir==OUTPUT) ? SET_BIT(DDRB,pin):CLEAR_BIT(DDRB,pin);break;
		case DIO_PORTC : (dir==OUTPUT) ? SET_BIT(DDRC,pin):CLEAR_BIT(DDRC,pin);break;
		case DIO_PORTD : (dir==OUTPUT) ? SET_BIT(DDRD,pin):CLEAR_BIT(DDRD,pin);break;
	}
}
void DIO_SetPinState(port_type port, pin_type pin, state_type state)
{
	switch(port)
	{
		case DIO_PORTA : (state==HIGH) ? SET_BIT(PORTA,pin):CLEAR_BIT(PORTA,pin);break;
		case DIO_PORTB : (state==HIGH) ? SET_BIT(PORTB,pin):CLEAR_BIT(PORTB,pin);break;
		case DIO_PORTC : (state==HIGH) ? SET_BIT(PORTC,pin):CLEAR_BIT(PORTC,pin);break;
		case DIO_PORTD : (state==HIGH) ? SET_BIT(PORTD,pin):CLEAR_BIT(PORTD,pin);break;
	}
}
state_type DIO_GetPinState(port_type port, pin_type pin)
{
	state_type state_temp;
	switch(port)
	{
		case DIO_PORTA : state_temp = GET_BIT(PINA,pin);break;
		case DIO_PORTB : state_temp = GET_BIT(PINB,pin);break;
		case DIO_PORTC : state_temp = GET_BIT(PINC,pin);break;
		case DIO_PORTD : state_temp = GET_BIT(PIND,pin);break;
	}
	return state_temp;
}