/*
* COUNTER_APP.h
*
* Created: 9/30/2023 11:24:38 AM
*  Author: En.EslamEid
*/


#ifndef COUNTER_APP_H_
#define COUNTER_APP_H_			   

#include "DIO_int.h"
#define F_CPU 16000000UL
#include <util/delay.h>
#include "BIT_MATH.h"

void Counter_App_init(void);
void Counter_App_Start(void);




#endif /* COUNTER_APP_H_ */