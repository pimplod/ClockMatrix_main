/* ***************************************************************************
 **   delay.c
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


#ifndef _DELAY_C
#define _DELAY_C

/*****************************************************************************
 **Files to Include
 *****************************************************************************/
#include <xc.h> 
#include "global.h"
#include "delay.h"

/*****************************************************************************
 ** Global Variables
 *****************************************************************************/
//extern volatile unsigned long milliseconds;

/*****************************************************************************
 **Delay Functions
 *****************************************************************************/


void DelayFor12TCY(void){
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
    Nop();
}

// Delay specified amount of microseconds

void DelayUs(int us){
    while(us != 0) {
        DelayFor12TCY();
        us--;
    }
}

void DelayMs(int ms){
   unsigned long time = milliseconds;
   while((milliseconds-time) < ms);

}



#endif //_DELAY_C


