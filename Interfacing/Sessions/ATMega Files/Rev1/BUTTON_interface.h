/*
* BUTTON_interface.h
*
* Created: 9/23/2022 10:23:19 PM
*  Author: En.EslamEid
*/


#ifndef BUTTON_INTERFACE_H_
#define BUTTON_INTERFACE_H_

#define F_CPU 16000000UL
#include "util/delay.h"
#include "../BIT_MATH.h"
#include "../STD_TYPES.h"
#include "../MCAL/DIO_interface.h"

#define Button0  0
#define Button1  1
#define Button2  2

#define PRESSED  1
#define RELEASED 0

void BUTTON_INIT( u8 n );
u8   BUTTON_GET (u8 button_num);



#endif /* BUTTON_INTERFACE_H_ */