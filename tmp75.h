/* ***************************************************************************
 **    tmp75.h
 **
 **  Project      : ClockMatrix_v0
 **  Target       : PIC18F14K50
 **  Description  : Project used to develop clock firmware.  Tested methods and
 **                 determined functionality (needed, wanted, and the possible)
 **
 **  Compiler     : HI-TECH C  Version 9.80
 **  IDE          : MPLABX v1.80
 **  Created      : 5/8/2013
 **  Branched     : 6/27/2013 -- started v2
 **
 **  R Hanlen <implod@gmail.com>
 ** ***************************************************************************/

#ifndef _TMP75_H_
#define  _TMP75_H_

#define LM75_ID         0x90

#define LM75_TEMP_REGISTER      0x00
#define LM75_CONFIG_REGISTER    0x01
#define LM75_TLOW_REGISTER      0x02
#define LM75_THIGH_REGISTER     0x03

#define CELCSIUS        0x00
#define FAHRENHEIT      0x01
/*****************************************************************************
 **FUNCTION PROTOTYPES
 *****************************************************************************/

uint8_t LM75Init(void);
void LM75GetTemp(void);

#endif //_TMP75_H_
