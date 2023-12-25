/*
 * EXT_Interrupt.h
 *
 * Created: 6/12/2021 7:12:46 PM
 *  Author: EN.ESLAM EID
 */ 


#ifndef EXT_INTERRUPT_H_
#define EXT_INTERRUPT_H_

#include "EXT_Interrupt_CFG.h"

#define Rising_Edge                    0
#define Falling_Edge                   1
#define Any_Logical_Change             2
#define Low_Level                      3

void INT0_INIT(void);
void INT1_INIT(void);
void INT2_INIT(void);



#endif /* EXT_INTERRUPT_H_ */