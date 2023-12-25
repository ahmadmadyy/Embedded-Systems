/*
 * WDT.h
 *
 * Created: 8/5/2021 10:18:26 PM
 *  Author: EN.ESLAM EID
 */ 


#ifndef WDT_H_
#define WDT_H_

#include "WDT_CFG.h"

#define WDT_16_3_ms         0
#define WDT_32_5_ms         1
#define WDT_65_ms           2
#define WDT_0_13_s          3
#define WDT_0_26_s          4
#define WDT_0_52_s          5
#define WDT_1_0_s           6
#define WDT_2_1_s           7

void WDT_ON(void);

void WDT_OFF(void);

void WDT_Refresh(void);


#endif /* WDT_H_ */