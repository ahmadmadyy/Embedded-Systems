/*
 * MCU.h
 *
 * Created: 4/7/2021 10:55:26 PM
 *  Author: EN.ESLAM EID
 */ 


#ifndef MCU_H_
#define MCU_H_

#include "std.h"

/***************************************** DIO ********************************************/
#define PORTA    (*(volatile Uint8*)(0x3B))
#define DDRA     (*(volatile Uint8*)(0x3A))
#define PINA     (*(volatile Uint8*)(0x39))

#define PORTB    (*(volatile Uint8*)(0x38))
#define DDRB     (*(volatile Uint8*)(0x37))
#define PINB     (*(volatile Uint8*)(0x36))

#define PORTC    (*(volatile Uint8*)(0x35))
#define DDRC     (*(volatile Uint8*)(0x34))
#define PINC     (*(volatile Uint8*)(0x33))

#define PORTD    (*(volatile Uint8*)(0x32))
#define DDRD     (*(volatile Uint8*)(0x31))
#define PIND     (*(volatile Uint8*)(0x30))
/***************************************** ADC ********************************************/
#define ADMUX    (*(volatile Uint8*)(0x27))
#define ADCSRA   (*(volatile Uint8*)(0x26))
#define ADCH     (*(volatile Uint8*)(0x25))
#define ADCL     (*(volatile Uint8*)(0x24))
#define ADCRA    (*(volatile Uint16*)(0x24))
#define SFIOR    (*(volatile Uint8*)(0x50))
/***************************************** EXT INT ********************************************/
#define SREG    (*(volatile Uint8*)(0x5F))
#define GICR    (*(volatile Uint8*)(0x5B))
#define GIFR    (*(volatile Uint8*)(0x5A))
#define MCUCR   (*(volatile Uint8*)(0x55))
#define MCUCSR  (*(volatile Uint8*)(0x54))
/***************************************** UART ********************************************/
#define UCSRA  (*(volatile Uint8*)(0x2B))
#define UCSRB  (*(volatile Uint8*)(0x2A))
#define UCSRC  (*(volatile Uint8*)(0x40))
#define UBRRH  (*(volatile Uint8*)(0x40))
#define UBRRL  (*(volatile Uint8*)(0x29))
#define UDR    (*(volatile Uint8*)(0x2C))
/***************************************** SPI ********************************************/
#define SPCR    (*(volatile Uint8*)(0x2D))
#define SPSR    (*(volatile Uint8*)(0x2E))
#define SPDR    (*(volatile Uint8*)(0x2F))
/***************************************** I2C ********************************************/
#define TWCR    (*(volatile Uint8*)(0x56))
#define TWDR    (*(volatile Uint8*)(0x23))
#define TWAR    (*(volatile Uint8*)(0x22))
#define TWBR    (*(volatile Uint8*)(0x20))
#define TWSR    (*(volatile Uint8*)(0x21))
/***************************************** Timers ********************************************/
#define TIMSK    (*(volatile Uint8*)(0x59))
#define TIFR     (*(volatile Uint8*)(0x58))

///////////////////////******************* Timer0 *******************///////////////////////
#define TCCR0    (*(volatile Uint8*)(0x53))
#define TCNT0    (*(volatile Uint8*)(0x52))
#define OCR0     (*(volatile Uint8*)(0x5C))
///////////////////////******************* Timer1 *******************///////////////////////
#define TCCR1A    (*(volatile Uint8*)(0x4F))
#define TCCR1B    (*(volatile Uint8*)(0x4E))
#define TCNT1H    (*(volatile Uint8*)(0x4D))
#define TCNT1L    (*(volatile Uint8*)(0x4C))
#define TCNT1    (*(volatile Uint16*)(0x4C))
#define OCR1AH    (*(volatile Uint8*)(0x4B))
#define OCR1AL    (*(volatile Uint8*)(0x4A))
#define OCR1A    (*(volatile Uint16*)(0x4A))
#define OCR1BH    (*(volatile Uint8*)(0x49))
#define OCR1BL    (*(volatile Uint8*)(0x48))
#define ICR1H     (*(volatile Uint8*)(0x47))
#define ICR1L     (*(volatile Uint8*)(0x46))
///////////////////////******************* Timer2 *******************///////////////////////
#define TCCR2    (*(volatile Uint8*)(0x45))
#define TCNT2    (*(volatile Uint8*)(0x44))
#define OCR2     (*(volatile Uint8*)(0x43))
/***************************************** I2C ********************************************/
#define TWBR    (*(volatile Uint8*)(0x20))
#define TWSR    (*(volatile Uint8*)(0x21))
#define TWAR    (*(volatile Uint8*)(0x22))
#define TWDR    (*(volatile Uint8*)(0x23))
#define TWCR    (*(volatile Uint8*)(0x56))
/***************************************** WDT ********************************************/
#define WDTCR    (*(volatile Uint8*)(0x41))

#endif /* MCU_H_ */