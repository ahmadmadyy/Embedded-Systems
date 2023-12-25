/*
* KEYPAD_prog.c
*
* Created: 9/24/2022 9:30:07 PM
*  Author: En.EslamEid
*/

#include "KEYPAD_interface.h"

u8 KEYs[4][4]={
	{'1','2','3','A'},
	{'4','5','6','B'},
	{'7','8','9','C'},
	{'*','0','#','D'},
};


void KEYPAD_init(){
	
	DIO_SetPinDir(COL_PORT,C0_PIN,OUTPUT);
	DIO_SetPinDir(COL_PORT,C1_PIN,OUTPUT);
	DIO_SetPinDir(COL_PORT,C2_PIN,OUTPUT);
	DIO_SetPinDir(COL_PORT,C3_PIN,OUTPUT);

	DIO_SetInputPullUp(ROW_PORT,R0_PIN);
	DIO_SetInputPullUp(ROW_PORT,R1_PIN);
	DIO_SetInputPullUp(ROW_PORT,R2_PIN);
	DIO_SetInputPullUp(ROW_PORT,R3_PIN);
	
	
	DIO_SetPinValue(COL_PORT,C0_PIN,HIGH);
	DIO_SetPinValue(COL_PORT,C1_PIN,HIGH);
	DIO_SetPinValue(COL_PORT,C2_PIN,HIGH);
	DIO_SetPinValue(COL_PORT,C3_PIN,HIGH);
	
}

u8 KEYPAD_GetKey(){
	
	u8 value=0;
	for (u8 i=C0_PIN;i<=C3_PIN;i++)
	{
		DIO_SetPinValue(COL_PORT,i,LOW);
		
		for (u8 j=R0_PIN; j<=R3_PIN;j++)
		{
			if (DIO_GetPinValue(ROW_PORT,j)==LOW)
			{
				_delay_ms(25);
				if (DIO_GetPinValue(ROW_PORT,j)==LOW)
				{
					
					value= KEYs[ j-R0_PIN  ][ i-C0_PIN ];
					break;
				}
			}
		}
		
		DIO_SetPinValue(COL_PORT,i,HIGH);
		if (value != 0) break;

	 }
	 
	 return value;
}