/* ***************************************************************************
 **   delay.h
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


#ifndef _DELAY_H
#define _DELAY_H


//#define NOP_3()     (NOP();NOP();NOP())
//#define NOP_5()      (NOP();NOP();NOP();NOP();NOP())

/*****************************************************************************
 ** FUNCTION PROTOTYPES
 *****************************************************************************/
void DelayMs(int ms);     // delay specified amount of milliseconds
void DelayUs(int us);     // delay specified amount of microseconds
//void DelayS(int sec);         // delay specified amount of seconds
//void DelayFor18TCY();
void DelayFor12TCY(void);
//void Delay10TCYx(unsigned char unit);
//void Delay100TCYx(unsigned char unit);
//void Delay10KTCYx(unsigned char unit);
#endif //_DELAY_H


