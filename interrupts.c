/* ***************************************************************************
 **  interrupts.c
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

/*****************************************************************************
 ** Files to Include
 *****************************************************************************/

#include <xc.h>            /* HiTech General Includes */
#include <stdint.h>         /* For uint8_t definition */
//#include <stdbool.h>        /* For true/false definition */

#include "global.h"
#include "display.h"
#include "DS1307.h"
/*****************************************************************************
 ** Variables
 *****************************************************************************/

//extern volatile unsigned long tmrCount;

/*****************************************************************************
 ** Interrupt Functions
 *****************************************************************************/

/* High-priority service */
void interrupt high_isr(void){
    /*Timer 0 -- Display update. (approx. 300 us cycle)
     300 us x 8 rows = 2.4 ms to update whole display
      which is around 420 Hz refresh rate*/
    if ((TMR0IE) && (TMR0IF)) {
        ShiftOutNextRow();

        if((display.activeRow++) == 8) display.activeRow = 0;
        
        TMR0L = 50; // Reset the timer0 counter
        TMR0IF = 0; // Clear the timer0 interrupt flag
    } 
}

/* Low-priority interrupt routine */
void low_priority interrupt low_isr(void){

    if ((TMR3IE) && (TMR3IF)) {
        milliseconds++;
        tmrCount++;
        
        if(tmrCount%2)
            ButtonCheck();
        
        WRITETIMER3(53717);

        TMR3IF = CLEAR; // Clear the interrupt flag
    }
}
