						 /*
 * COUNTER_APP.h
 *
 * Created: 9/30/2023 11:23:53 AM
 *  Author: En.EslamEid
 */ 


/*
* main.c
*
* Created: 9/29/2023 2:16:12 PM
*  Author: En.EslamEid
*/

#include "KP_int.h"
#include "LCD_int.h"




int main(void)
{
KP_init();
LCD_init();	

	while(1)
	{
		
		u8 key = KP_GetKey();
		
		if (key != NO_KEY)
		{
			LCD_Write_CHAR(key);
			_delay_ms(200);
			key=NO_KEY;
			//LCD_Write_CMD(CMD_Shift_Entire_Display_Right);
		}
		
	}
}
