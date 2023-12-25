
#define F_CPU 16000000
#include "HAL/Button.h"
#include <util/delay.h>
#include "MC_Selector.h"
#include "HAL/LCD.h"
#include "HAL/Keypad.h"
#include "main_config.h"
#include "std.h"
#include "HAL/SERVO.h"
#include "MCAL/ADC.h"
#include "devices_control.h"
#include "MCAL/Timer.h"


Uint8 Sensor_read=0 ;
Uint8 HighTempErrorFlag;


int main(void)
{
	

LCD_INIT();
Keypad_INIT();
LIGHT_INIT();
Servo_Init();

ADC_INIT();
	
DIO_SetPinDir(DIO_PORTA, RELAY_PIN, DIO_PIN_OUT);
DIO_SetPinDir(DIO_PORTA, 0, DIO_PIN_IN);
DIO_SetPinDir(DIO_PORTA, DIO_PIN_3, DIO_PIN_OUT);

	
	Uint8 key=0;
	Sint8 PAGE =control_panel;
	

	
    while (1)    {
 	 
	 key = Keypad_GetVal();
	 
	 Sensor_read = TEMP_READ();
	LCD_GoTo(0,13);
	LCD_WriteCHAR('T');
	LCD_GoTo(0,14);
	LCD_WriteINTEGER(Sensor_read);
	if(Sensor_read > 18){
		 HighTempErrorFlag = ON;
		DIO_SetPinVal(DIO_PORTA, DIO_PIN_3, DIO_PIN_ON);
		DIO_SetPinVal(DIO_PORTA, RELAY_PIN, DIO_PIN_ON);
	}
	if(Sensor_read < 16 &&  HighTempErrorFlag ){ 
		
		DIO_SetPinVal(DIO_PORTA, DIO_PIN_3, DIO_PIN_OFF);
		DIO_SetPinVal(DIO_PORTA, RELAY_PIN, DIO_PIN_OFF);

		 HighTempErrorFlag = OFF;
 
		
		 }

	switch(PAGE){
		
		case control_panel :
			LCD_GoTo(0,0);
			LCD_WriteSTRING("CONTROL PAGE");
			LCD_GoTo(1,0);
			LCD_WriteSTRING("AC:1 DOOR:2 L:3 ");
			 if(key=='1'|| key=='2'||key=='3' ) {PAGE = key;}
						 															
  		break;
		
		case AC_page :{
			LCD_GoTo(0,0);
			LCD_WriteSTRING("AIR CONDITION");
			LCD_GoTo(1,0);
			LCD_WriteSTRING(" STRT STP BK:F4 ");
			 	switch(key)
			 	{
				 	case START : {  RELAY(ON);  break;}
				 	case STOP : {  RELAY(OFF); break;}
				 	case BK : {  PAGE=control_panel; break;}
			 	}		
	
			break;
			}
		
		
		case door_page	  :{
			LCD_GoTo(0,0);
			LCD_WriteSTRING(" DOOR CONTROL ");
			LCD_GoTo(1,0);
			LCD_WriteSTRING(" STRT STP BK:F4 ");
		
			switch(key)
			{
				case START : {  DOOR(OPN);  break;}
				case STOP : {  DOOR(CLS); break;}
				case BK : {  PAGE=control_panel; break;}
			}
			
		break;
		   }
		
		
		case led_page     :{
			LCD_GoTo(0,0);
			LCD_WriteSTRING(" LIGHT-CONTROL");
			LCD_GoTo(1,0);
			LCD_WriteSTRING(" STRT STP BK:F4 ");
			
			switch(key)
			{
				case START : {  LIGHT(ON);  break;}
				case STOP : {  LIGHT(OFF); break;}
				case BK : {  PAGE=control_panel; break;}
			}
			
				
		break;  }
		
		
		
		
		
		
	}
	}
	}
	
	
	
