/*
* KP_prog.c
*
* Created: 9/30/2023 1:19:10 PM
*  Author: En.EslamEid
*/

#include "KP_int.h"

u8 COL_Pin_ARRAY[4]={COL_0_Pin,COL_1_Pin,COL_2_Pin,COL_3_Pin}	;
u8 ROW_Pin_ARRAY[4]={ROW_0_Pin,ROW_1_Pin,ROW_2_Pin,ROW_3_Pin}	;
u8	KP_Array[4][4]={ { '1','2','3','A' },
{'4','5','6','B' },
{'7','8','9','C' },
{'*','0','#','D' } };

void KP_init(){
	
	DIO_SetPinDir(COL_PORT,COL_0_Pin,OUTPUT);
	DIO_SetPinDir(COL_PORT,COL_1_Pin,OUTPUT);
	DIO_SetPinDir(COL_PORT,COL_2_Pin,OUTPUT);
	DIO_SetPinDir(COL_PORT,COL_3_Pin,OUTPUT);
	
	DIO_SetPinValue(COL_PORT,COL_0_Pin,HIGH);
	DIO_SetPinValue(COL_PORT,COL_1_Pin,HIGH);
	DIO_SetPinValue(COL_PORT,COL_2_Pin,HIGH);
	DIO_SetPinValue(COL_PORT,COL_3_Pin,HIGH);
	
	
	DIO_SetInputPullUp(ROW_PORT,ROW_0_Pin);
	DIO_SetInputPullUp(ROW_PORT,ROW_1_Pin);
	DIO_SetInputPullUp(ROW_PORT,ROW_2_Pin);
	DIO_SetInputPullUp(ROW_PORT,ROW_3_Pin);
	
	
}
u8 KP_GetKey(void){
	
	u8 key=NO_KEY;
	for (u8 col=0;col<4;col++)
	{
		DIO_SetPinValue(COL_PORT,COL_Pin_ARRAY[col],LOW);
		for (u8 row=0;row<4;row++)
		{
			if (LOW == DIO_GetPinValue(ROW_PORT,ROW_Pin_ARRAY[row]) )
			{
				_delay_ms(35);
				if (LOW == DIO_GetPinValue(ROW_PORT,ROW_Pin_ARRAY[row]) )
				{
					key=KP_Array[row][col] ;
					continue;
				}
			}
		}
		
		
		DIO_SetPinValue(COL_PORT,COL_Pin_ARRAY[col],HIGH);
		if(key != NO_KEY) continue;
		
	}
	
	return key;
	
}