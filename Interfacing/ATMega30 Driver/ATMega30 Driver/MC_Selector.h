/*
 * Created: 3/15/2021 6:50:46 AM
 * Author: EN.ESLAM EID
 */ 


#ifndef MC_SELECTOR_H_
#define MC_SELECTOR_H_

/*Micro-controllers*/
#define ATMEGA32        1
#define ATMEGA328P      0

/*Micro-controller Options*/

#if  ATMEGA328P
#include "MCU_ATM328P.h"
#elif ATMEGA32
#include "MCU_ATMEGA32.h"
#endif



#endif /* MC_SELECTOR_H_ */