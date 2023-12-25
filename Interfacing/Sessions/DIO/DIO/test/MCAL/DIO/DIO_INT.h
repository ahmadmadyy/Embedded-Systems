#ifndef DIO_INT_H_
#define DIO_INT_H_

#include "STD_TYPES.h"
#include "BITMATH.h"
#include "MEM_MAP.h"
#include "DIO_CFG.h"
#include "DIO_prv.h"

void DIO_SetPinDir(port_type port, pin_type pin, dir_type dir);
void DIO_SetPinState(port_type port, pin_type pin, state_type state);
state_type DIO_GetPinState(port_type port, pin_type pin);

#endif /* DIO_INT_H_ */