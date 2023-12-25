/*
* LED_prog.c
*
* Created: 9/23/2022 7:28:33 PM
*  Author: En.EslamEid
*/
#include "LED_interface.h"


void LED_INIT(){
	
	DIO_SetPinDir(LED0_PORT,LED0_PIN,OUTPUT);	   //led0
	
	DIO_SetPinDir(LED1_PORT,LED1_PIN,OUTPUT);	  // led1
	
	DIO_SetPinDir(LED2_PORT,LED2_PIN,OUTPUT);	 //led2
	

}




void LED_MODE(u8 LEDx ,u8 mode ){
if (mode !=TOGGLE)
{
	
switch (LEDx){
	
	case LED0 :   DIO_SetPinValue(LED0_PORT,LED0_PIN,mode);    break;
	case LED1 :    DIO_SetPinValue(LED1_PORT,LED1_PIN,mode);    break;
	case LED2 :    DIO_SetPinValue(LED2_PORT,LED2_PIN,mode);    break;
		 
}	
}

else if ( mode ==TOGGLE   )
{
switch (LEDx){
	
	case LED0 :   DIO_TogglePinValue(LED0_PORT,LED0_PIN);    break;
	case LED1 :    DIO_TogglePinValue(LED1_PORT,LED1_PIN);    break;
	case LED2 :    DIO_TogglePinValue(LED2_PORT,LED2_PIN);    break;
	
}	
	
}


}


	
