


#ifndef MAIN_CONFIG_H_
#define MAIN_CONFIG_H_

#define Null   (void*)(0)


#define log_mode   0
#define admin_mode 1
#define user_mode  2
//---------------
#define log_page       '0'
#define AC_page        '1'
#define door_page      '2'
#define led_page	   '3' 
#define control_panel  '4'
//------------

//------------

#define BK  'I'
//------------



#define  START   'R'
#define  STOP	 'O'
#define  F1		 'F'
#define  F2		 'G'
#define  F3		 'H'
#define  F4		 'I'

	
Uint8 LCD_row = 0, LCD_col = 0;

/***********EEPROM ADD******/
/*
Uint8 data_Add1 = 0X00;
Uint8 data_Add2 = 0X10;
Uint8 data_Add3 = 0X0D;
Uint8 data_Add4 = 0X0E;
Uint8 data_Add5 = 0X0F;	
Uint8 data_Add6 = 0X10;*/
/*

#define RELAY_PIN   2
#define OFF     0x00
#define ON      0xff
#define OPN     0
#define CLS     1*/

#endif 