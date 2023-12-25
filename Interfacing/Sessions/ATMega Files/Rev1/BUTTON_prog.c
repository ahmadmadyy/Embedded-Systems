/*
* BUTTON_prog.c
*
* Created: 9/23/2022 9:53:13 PM
*  Author: En.EslamEid
*/

 #include "BUTTON_interface.h"

void BUTTON_INIT( u8 n ){
	
	switch(n){
		
		case 1 :
		CLEAR_BIT(DDRB,Pin0);//button0 input pin
		break;
		case 2 :
		CLEAR_BIT(DDRB,Pin0);//button0 input pin
		CLEAR_BIT(DDRD,Pin6);//button1 input pin
		break;
		case 3 :
		CLEAR_BIT(DDRB,Pin0);//button0 input pin
		CLEAR_BIT(DDRD,Pin6);//button0 input pin
		CLEAR_BIT(DDRD,Pin2);//button0 input pin
		break;
		
		
	}

};



u8 BUTTON_GET(u8 button_num){
	
	switch(button_num) {
		
		case Button0 :
		if (IS_HIGH(PINB,0))
		{
			_delay_ms(25);
			if (IS_HIGH(PINB,0)) return PRESSED;
		}
		else return RELEASED;
		case Button1 :
		if (IS_HIGH(PIND,6))
		{
			_delay_ms(25);
			if (IS_HIGH(PIND,6)) return PRESSED;
		}
		else return RELEASED;
		
		case Button2 :
		if (IS_HIGH(PIND,2))
		{
			_delay_ms(25);
			if (IS_HIGH(PIND,2)) return PRESSED;
		}
		else return RELEASED;
		
		
		
		
		
	}
	
	
}
