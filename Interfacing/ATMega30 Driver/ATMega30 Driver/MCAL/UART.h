/*
 * UART.h
 *
 * Created: 6/25/2021 1:28:45 PM
 *  Author: EN.ESLAM EID
 */ 


#ifndef UART_H_
#define UART_H_

#include "UART_CFG.h"

/*Parity Modes*/
#define DISABLED        0
#define RESERVED        1
#define EVEN_PARITY     2
#define ODD_PARITY      3

/*Stop Bits*/
#define _1_BIT          0
#define _2_BIT          1

/*Data Size*/
#define _5_BIT          0
#define _6_BIT          1
#define _7_BIT          2
#define _8_BIT          3

/*Baud Rates*/
#define B_2400          416
#define B_4800          207
#define B_9600          103
#define B_14400         68
#define B_19200         51
#define B_28800         34
#define B_38400         25
#define B_57600         16
#define B_76800         12
#define B_115200        8
#define B_250000        3
#define B_500000        1
#define B_1000000       0

void UART_INIT(void);

void UART_Tx(Uint8 chr);

void UART_Tx_String(Uint8* str);

Uint8 UART_Rx(void);



#endif /* UART_H_ */