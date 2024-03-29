#ifndef WIEGAND_H
#define WIEGAND_H

#include "stdint.h"

extern void WIEGAND_init(void);
extern uint32_t WIEGAND_getCode(void);
extern uint8_t WIEGAND_getWiegandType(void);
extern int WIEGAND_available(void);
extern void WIEGAND_ReadD0(void);
extern void WIEGAND_ReadD1(void);

#endif
