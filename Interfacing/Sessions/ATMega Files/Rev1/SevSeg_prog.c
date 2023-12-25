/*
 * SevSeg_prog.c
 *
 * Created: 9/24/2022 7:32:56 PM
 *  Author: En.EslamEid
 */ 

#include "SevSeg_interface.h"


void SevSeg_init(){
	
	DIO_SetPinDir(SevSeg_EN1_PORT,SevSeg_EN1_PIN,OUTPUT);
	DIO_SetPinDir(SevSeg_EN2_PORT,SevSeg_EN2_PIN,OUTPUT);
	SevSeg_DDR |=  ((1<<SevSeg_A)| 1<<SevSeg_B | 1<<SevSeg_C| 1<<SevSeg_D)  ;
}

void SevSeg_Display(u8 Val){
	
	for (u8 i=0;i<200;i++){
		
		DIO_SetPinValue(SevSeg_EN1_PORT,SevSeg_EN1_PIN,LOW);
		DIO_SetPinValue(SevSeg_EN2_PORT,SevSeg_EN2_PIN,HIGH);
		SevSeg_PORT = ((Val%10)<<SevSeg_A)|(SevSeg_PORT & (~(0x0F<<SevSeg_A)) );
		_delay_ms(5);
		DIO_SetPinValue(SevSeg_EN1_PORT,SevSeg_EN1_PIN,HIGH);
		DIO_SetPinValue(SevSeg_EN2_PORT,SevSeg_EN2_PIN,LOW);
		SevSeg_PORT = ((Val/10)<<SevSeg_A)|(SevSeg_PORT & (~(0x0F<<SevSeg_A)));
		_delay_ms(5);
		
	}
	
	DIO_SetPinValue(SevSeg_EN1_PORT,SevSeg_EN1_PIN,LOW);
	DIO_SetPinValue(SevSeg_EN2_PORT,SevSeg_EN2_PIN,LOW);

}


