/*
 * KP_int.h
 *
 * Created: 9/30/2023 1:17:14 PM
 *  Author: En.EslamEid
 */ 


#ifndef KP_INT_H_
#define KP_INT_H_

#include "DIO_int.h"
#include "KP_cfg.h"
#include "KP_prv.h"

#define F_CPU  16000000UL
#include <util/delay.h>

void KP_init();
u8 KP_GetKey(void);






#endif /* KP_INT_H_ */