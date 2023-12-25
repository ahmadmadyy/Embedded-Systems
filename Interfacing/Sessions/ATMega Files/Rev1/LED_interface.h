/*
 * LED_interface.h
 *
 * Created: 9/23/2022 7:27:10 PM
 *  Author: En.EslamEid
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "../MCAL/DIO_interface.h"
#include "LED_config.h"
#define  ON  1
#define  OFF 0
#define  TOGGLE 2

#define  LED0  0
#define  LED1  1
#define  LED2  2

void LED_INIT(void);
void LED_MODE(u8 LEDx ,u8 mode );



#endif /* LED_INTERFACE_H_ */