/*
 * KP_int.h
 *
 * Created: 9/30/2023 9:17:25 PM
 *  Author: Khaled
 */ 


#ifndef KP_INT_H_
#define KP_INT_H_

#include "KP_cfg.h"
#include "KP_prv.h"
#include "DIO_int.h"

#define F_CPU 16000000UL
#include <util/delay.h>

void Keypad_init();
u8 Keypad_GetKey();




#endif /* KP_INT_H_ */