/*
 * COUNTER_APP.h
 *
 * Created: 9/30/2023 7:27:01 PM
 *  Author: Khaled
 */ 


#ifndef COUNTER_APP_H_
#define COUNTER_APP_H_

#define F_CPU  16000000UL
#include <util/delay.h>

#include "DIO_int.h"
#include "BitMath.h"

void Counter_App_Init(void);
void Counter_App_Start(void);

#endif /* COUNTER_APP_H_ */