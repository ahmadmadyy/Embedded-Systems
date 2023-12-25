/*
 * EXT_Interrupt.c
 *
 * Created: 6/12/2021 7:13:24 PM
 *  Author: EN.ESLAM EID
 */ 

#include "EXT_Interrupt.h"

void INT0_INIT(void)
{
	/*Enable global interrupt*/
	SREG = GLOBAL_INT << 7;
	/*Enable INT0 peripheral interrupt*/
	Set_Bit(GICR, 6);
	/*Edge detector*/
	#if INT0_Interrupt == Rising_Edge
	Set_Bit(MCUCR, 0);
	Set_Bit(MCUCR, 1);
	#elif INT0_Interrupt == Falling_Edge
	Clear_Bit(MCUCR, 0);
	Set_Bit(MCUCR, 1);	
	#elif INT0_Interrupt == Any_Logical_Change
	Set_Bit(MCUCR, 0);
	Clear_Bit(MCUCR, 1);
	#elif INT0_Interrupt == Low_Level
	Clear_Bit(MCUCR, 0);
	Clear_Bit(MCUCR, 1);
#endif
}
void INT1_INIT(void)
{
	/*Enable global interrupt*/
	SREG = GLOBAL_INT << 7;
	/*Enable INT1 peripheral interrupt*/
	Set_Bit(GICR, 7);
	/*Edge detector*/
	#if INT1_Interrupt == Rising_Edge
	Set_Bit(MCUCR, 2);
	Set_Bit(MCUCR, 3);
	#elif INT1_Interrupt == Falling_Edge
	Clear_Bit(MCUCR, 2);
	Set_Bit(MCUCR, 3);
	#elif INT1_Interrupt == Any_Logical_Change
	Set_Bit(MCUCR, 2);
	Clear_Bit(MCUCR, 3);
	#elif INT1_Interrupt == Low_Level
	Clear_Bit(MCUCR, 2);
	Clear_Bit(MCUCR, 3);
	#endif	
}
void INT2_INIT(void)
{
	/*Enable global interrupt*/
	SREG = GLOBAL_INT << 7;
	/*Enable INT2 peripheral interrupt*/
	Set_Bit(GICR, 5);
	/*Edge detector*/
	#if INT2_Interrupt == Rising_Edge
	Set_Bit(MCUCSR, 6);
	#elif INT2_Interrupt == Falling_Edge
	Clear_Bit(MCUCSR, 6);
	#endif	
}

