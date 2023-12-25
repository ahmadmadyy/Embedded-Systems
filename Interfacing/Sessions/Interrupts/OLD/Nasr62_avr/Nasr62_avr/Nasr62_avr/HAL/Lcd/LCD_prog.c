/*
 * LCD_prog.c
 *
 * Created: 10/6/2023 9:24:27 PM
 *  Author: En.EslamEid
 */ 


#include "LCD_int.h"

void LCD_init(){
	DIO_SetPinDir(LCD_CMD_PORT,RS_PIN,OUTPUT);
	DIO_SetPinDir(LCD_CMD_PORT,RW_PIN,OUTPUT);
	DIO_SetPinDir(LCD_CMD_PORT,E_PIN,OUTPUT);
	DIO_SetPinDir(LCD_DATA_PORT,LCD_D4_Pin,OUTPUT);
	DIO_SetPinDir(LCD_DATA_PORT,LCD_D5_Pin,OUTPUT);
	DIO_SetPinDir(LCD_DATA_PORT,LCD_D6_Pin,OUTPUT);
	DIO_SetPinDir(LCD_DATA_PORT,LCD_D7_Pin,OUTPUT);
	LCD_Write_CMD(0x33);
	_delay_ms(1);
	LCD_Write_CMD(0x32);
	_delay_ms(1);
	LCD_Write_CMD(CMD_LCD_4Bit_Mode_2_Line_5X8);
	_delay_ms(1);
	LCD_Write_CMD(CMD_Display_ON_Cursor_Blink_OFF);
	_delay_ms(1);
	LCD_Write_CMD(CMD_Clear_Display);
	_delay_ms(2);
	LCD_Write_CMD(CMD_Shift_Display_Left_Per_Read_Write);
	_delay_ms(1);
	LCD_Write_CMD(CMD_Return_Home);
	_delay_ms(2);
	
	
	
	
	
}

void LCD_Write_CMD(u8 CMD){
	
	DIO_SetPinValue(LCD_CMD_PORT,RS_PIN,LOW);
	
	DIO_SetPinValue(LCD_CMD_PORT,RW_PIN,LOW);
		

	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,LOW);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,HIGH);
	
	LCD_DATA_PORT= (CMD & 0xF0) | (LCD_DATA_PORT & 0x0F) ;

	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,LOW);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,HIGH);
	
	LCD_DATA_PORT= (CMD << 4) | (LCD_DATA_PORT & 0x0F) ;

	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,LOW);
	_delay_ms(1);
	
	
	
}

 void LCD_Write_1D_num(u8 num){
	 
	 
	if (num <=9 && num >=0)
	{
			 LCD_Write_CHAR(num+'0');

	}
	 
 }

void LCD_Write_CHAR(u8 Data){
	
	DIO_SetPinValue(LCD_CMD_PORT,RS_PIN,HIGH);
	
	DIO_SetPinValue(LCD_CMD_PORT,RW_PIN,LOW);
		

	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,LOW);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,HIGH);
	
	LCD_DATA_PORT= (Data & 0xF0) | (LCD_DATA_PORT & 0x0F) ;

	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,LOW);
	
	_delay_ms(1);
	
	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,HIGH);
	
	LCD_DATA_PORT= (Data << 4) | (LCD_DATA_PORT & 0x0F) ;

	DIO_SetPinValue(LCD_CMD_PORT,E_PIN,LOW);
	_delay_ms(1);
	
	
	
}