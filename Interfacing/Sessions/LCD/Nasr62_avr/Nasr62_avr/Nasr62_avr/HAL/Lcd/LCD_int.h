/*
 * LCD_int.h
 *
 * Created: 10/6/2023 9:21:31 PM
 *  Author: En.EslamEid
 */ 


#ifndef LCD_INT_H_
#define LCD_INT_H_


#include "DIO_int.h"
#include "LCD_cfg.h"
#include "LCD_prv.h"
#define F_CPU 16000000
#include "util/delay.h"


void LCD_init();
void LCD_Write_CMD(u8 CMD);
void LCD_Write_CHAR(u8 CHAR);
void LCD_WriteString(const u8 * str);

void LCD_WriteNUM(s64 NUM);
void LCD_WriteFLOAT(f64 num,u8 Percision);
void LCD_Clear(void);



#endif /* LCD_INT_H_ */