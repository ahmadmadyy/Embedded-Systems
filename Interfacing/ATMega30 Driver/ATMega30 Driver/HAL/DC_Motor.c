/*
 * DC_Motor.c
 *
 * Created: 7/27/2021 7:51:25 PM
 *  Author: EN.ESLAM EID
 */ 

#include "DC_Motor.h"

/*DC_Motor1 Functions implementation*/
void DC_Motor1_INIT(void)
{
	/*DC motor pins direction*/
	DIO_SetPinDir(M1_PORT, M1_DIR_PIN1, DIO_PIN_OUT);
	DIO_SetPinDir(M1_PORT, M1_DIR_PIN2, DIO_PIN_OUT);
	
	/*DC motor pins value*/
	DIO_SetPinVal(M1_PORT, M1_DIR_PIN1, DIO_PIN_OFF);
	DIO_SetPinVal(M1_PORT, M1_DIR_PIN2, DIO_PIN_OFF);	
	
	/*generate clock for the timer*/
	TIMER0_Start();
}

void DC_Motor1_START(Uint16 duty_cycle, DC_Motor_Dir dir)
{
	switch(dir)
	{
		case  Clock_Wise:
		DIO_SetPinVal(M1_PORT, M1_DIR_PIN1, DIO_PIN_ON);
		DIO_SetPinVal(M1_PORT, M1_DIR_PIN2, DIO_PIN_OFF);
		break;
		case Anti_Clock_Wise:
		DIO_SetPinVal(M1_PORT, M1_DIR_PIN1, DIO_PIN_OFF);
		DIO_SetPinVal(M1_PORT, M1_DIR_PIN2, DIO_PIN_ON);
		break;
		default:
		break;
	}	
	PWM0_Gen(duty_cycle,0);
}

void DC_Motor1_STOP(void)
{
	DIO_SetPinVal(M1_PORT, M1_DIR_PIN1, DIO_PIN_OFF);
	DIO_SetPinVal(M1_PORT, M1_DIR_PIN2, DIO_PIN_OFF);	
}

/*DC_Motor1 Functions implementation*/
void DC_Motor2_INIT(void)
{
	/*DC motor pins direction*/
	DIO_SetPinDir(M2_PORT, M2_DIR_PIN1, DIO_PIN_OUT);
	DIO_SetPinDir(M2_PORT, M2_DIR_PIN2, DIO_PIN_OUT);
	
	/*DC motor pins value*/
	DIO_SetPinVal(M2_PORT, M2_DIR_PIN1, DIO_PIN_OFF);
	DIO_SetPinVal(M2_PORT, M2_DIR_PIN2, DIO_PIN_OFF);	
	
	/*generate clock for the timer*/
	TIMER0_Start();		
}

void DC_Motor2_START(Uint16 duty_cycle, DC_Motor_Dir dir)
{
	switch(dir)
	{
		case  Clock_Wise:
		DIO_SetPinVal(M2_PORT, M2_DIR_PIN1, DIO_PIN_ON);
		DIO_SetPinVal(M2_PORT, M2_DIR_PIN2, DIO_PIN_OFF);
		break;
		case Anti_Clock_Wise:
		DIO_SetPinVal(M2_PORT, M2_DIR_PIN1, DIO_PIN_OFF);
		DIO_SetPinVal(M2_PORT, M2_DIR_PIN2, DIO_PIN_ON);
		break;
		default:
		break;
	}
	PWM0_Gen(duty_cycle,0);
}

void DC_Motor2_STOP(void)
{
	DIO_SetPinVal(M2_PORT, M2_DIR_PIN1, DIO_PIN_OFF);
	DIO_SetPinVal(M2_PORT, M2_DIR_PIN2, DIO_PIN_OFF);
}
