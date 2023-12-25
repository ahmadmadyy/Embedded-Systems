/*
 * SevSeg_interface.h
 *
 * Created: 9/24/2022 7:01:26 PM
 *  Author: En.EslamEid
 */ 


#ifndef SEVSEG_INTERFACE_H_
#define SEVSEG_INTERFACE_H_

#define F_CPU 16000000UL
#include "util/delay.h"
#include "../MCAL/DIO_interface.h"
#include "SevSeg_config.h"

void SevSeg_init(void);
void SevSeg_Display(u8 Val);



#endif /* SEVSEG_INTERFACE_H_ */