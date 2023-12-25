/*
 * devices_control.h
 *
 * Created: 3/3/2022 2:35:45 PM
 *  Author: EN.ESLAM EID
 */ 


#ifndef DEVICES_CONTROL_H_
#define DEVICES_CONTROL_H_

#include "HAL\SERVO.h"
#include "std.h"
#include "MCAL\ADC.h"

#define RELAY_PIN   2
#define OFF     0x00
#define ON      0xff
#define OPN     0
#define CLS     1

#define TOIE0   0
extern Uint8 Sensor_read ;


void RELAY(Uint8 state);
void LIGHT_INIT();
void LIGHT(Uint8 state);
void DOOR(Uint8 state);
 Uint8 TEMP_READ();


#endif /* DEVICES_CONTROL_H_ */