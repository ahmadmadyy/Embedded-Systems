
#include "COUNTER_APP.h"
#include "KP_int.h"

void SEVSEG_init();
void SEVSEG_Display(u8 num);

int main(void)
{
	//Counter_App_Init();
	void SEVSEG_init();
	while(1)
	{
		//Counter_App_Start();
		u8 key = Keypad_GetKey();
		if(key != NO_KEY)
		{
			SEVSEG_Display((key-'0')); //key
			key=NO_KEY;
		}
		
	}
}
void SEVSEG_init()
{
	DIO_SetPinDir(DIO_PORTA,P4,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,P5,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,P6,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,P7,OUTPUT);
	
	DIO_SetPinDir(DIO_PORTB,P1,OUTPUT);
	DIO_SetPinDir(DIO_PORTB,P2,OUTPUT);
	
	DIO_SetPinState(DIO_PORTB,P1,HIGH);
	DIO_SetPinState(DIO_PORTB,P2,HIGH);
}
void SEVSEG_Display(u8 num)
{
	for(u8 i=0; i<2000 ; i++)
	{
		DIO_SetPinState(DIO_PORTB,P1,LOW);
		DIO_SetPinState(DIO_PORTB,P2,HIGH);
		PORTA = ((num/10)<<4);
		_delay_ms(2);
		
		DIO_SetPinState(DIO_PORTB,P1,HIGH);
		DIO_SetPinState(DIO_PORTB,P2,LOW);
		PORTA = ((num%10)<<4);
		_delay_ms(2);
	}
	
}