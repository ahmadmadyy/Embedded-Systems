
#include "COUNTER_APP.h"

u8 counter=0;


void Counter_App_init(void){
	
	
	//DDRA=0xF0;
	DIO_SetPinDir(DIO_PORTA,Pin4,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,Pin5,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,Pin6,OUTPUT);
	DIO_SetPinDir(DIO_PORTA,Pin7,OUTPUT);
	
	DIO_SetPinDir(DIO_PORTB,Pin1,OUTPUT);//En2
	DIO_SetPinDir(DIO_PORTB,Pin2,OUTPUT);//En1
	
	
	
	DIO_SetPinDir(DIO_PORTD,Pin2,INPUT);   //push button 2
	DIO_SetPinDir(DIO_PORTD,Pin6,INPUT);   //push button 1
	DIO_SetPinDir(DIO_PORTB,Pin0,INPUT);  //push button  0
	
	DIO_SetPinDir(DIO_PORTA,Pin3,OUTPUT);  //push button  0
	
	
	
}


void Counter_App_Start(void){
	
	
	
	if (IS_HIGH(PIND,Pin2))
	{
		_delay_ms(50);
		if (IS_HIGH(PIND,Pin2))
		{
			counter++;
			DIO_SetPinValue(DIO_PORTA,Pin3,HIGH);  //push button  0
			_delay_ms(10);
			DIO_SetPinValue(DIO_PORTA,Pin3,LOW);  //push button  0
			
		}
		
	}
	
	if (GET_BIT(PIND,6)==HIGH)
	{
		_delay_ms(50);
		if (GET_BIT(PIND,6)==HIGH)
		{
			DIO_SetPinValue(DIO_PORTA,Pin3,HIGH);  //push button  0
			_delay_ms(10);
			DIO_SetPinValue(DIO_PORTA,Pin3,LOW);  //push button  0
			if (counter!=0)
			{
				
				counter--;
			}
			
			
		}
		
	}
	
	if (IS_HIGH(PINB,Pin0))
	{
		_delay_ms(50);
		if (IS_HIGH(PINB,Pin0))
		{
			DIO_SetPinValue(DIO_PORTA,Pin3,HIGH);  //push button  0
			_delay_ms(10);
			DIO_SetPinValue(DIO_PORTA,Pin3,LOW);  //push button  0
			counter=0;
			
		}
		
	}
	
	DIO_SetPinValue(DIO_PORTB,Pin1,LOW);//En2
	DIO_SetPinValue(DIO_PORTB,Pin2,HIGH);//En1
	
	PORTA=(counter/10)<<4;
	_delay_ms(2);
	
	DIO_SetPinValue(DIO_PORTB,Pin1,HIGH);//En2
	DIO_SetPinValue(DIO_PORTB,Pin2,LOW);//En1
	
	PORTA=(counter%10)<<4;
	_delay_ms(2);
	
	
	
	
}