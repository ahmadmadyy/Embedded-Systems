#ifndef DIO_INT_H_
#define DIO_INT_H_

#include "STD_Types.h"
#include "BitMath.h"
#include "Mem_Map.h"
#include "DIO_cfg.h"
#include "DIO_prv.h"


void DIO_SetPinDir(port_type , pin_type , dir_type);
void DIO_SetPinState(port_type , pin_type , state_type);
void DIO_TogPinState(port_type, pin_type);
state_type DIO_GetPinState(port_type , pin_type);
void DIO_SetInputPullUp(port_type, pin_type);







#endif /* DIO_INT_H_ */