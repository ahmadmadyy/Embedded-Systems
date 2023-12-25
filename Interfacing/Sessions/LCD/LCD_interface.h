/*
* LCD_interface.h
*
* Created: 9/30/2022 9:49:53 PM
*  Author: En.EslamEid
*/


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#include "../../MCAL/DIO_interface.h"
#include "LCD_config.h"
#include "LCD_private.h"
#define F_CPU 16000000
#include "util/delay.h"


void LCD_init();
void LCD_Write_CMD(u8 CMD);
void LCD_Write_CHAR(u8 CHAR);
void LCD_WriteString(const u8 * str);

void LCD_WriteNUM(s64 NUM);
void LCD_WriteFLOAT(f64 num,u8 Percision);
 void LCD_Clear(void);


#endif /* LCD_INTERFACE_H_ */