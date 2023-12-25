/*
 * WDT.c
 *
 * Created: 8/5/2021 10:17:56 PM
 *  Author: EN.ESLAM EID
 */ 

#include "WDT.h"

void WDT_ON(void)
{
	//Enable WDT
	//Setting the value of Prescaler
	WDTCR = WDT_period | 0X08;
}

void WDT_OFF(void)
{
	/*
	Disabling the WDT:
	1-so to disable WDT we must first write 1 in WDT enable bit 
	and also on WDT turn-off enable bit at the same operation
	2-clear WDT enable & WDT turn-off bits also at the same operation
	...........
	Note that the disabling process must happen in only four clock cycles
	*/
	WDTCR = 0X18;
	WDTCR = 0X00;
}

void WDT_Refresh(void)
{
	WDT_ON();
	WDT_OFF();
}