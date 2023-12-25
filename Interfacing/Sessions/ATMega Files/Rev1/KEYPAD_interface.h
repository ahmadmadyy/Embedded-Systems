/*
 * KEYPAD_interface.h
 *
 * Created: 9/24/2022 9:29:47 PM
 *  Author: En.EslamEid
 */ 


#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

#define F_CPU 16000000UL
#include "util/delay.h"
#include "../MCAL/DIO_interface.h"
#include "KEYPAD_config.h"


void KEYPAD_init();

u8 KEYPAD_GetKey();



#endif /* KEYPAD_INTERFACE_H_ */