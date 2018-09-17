/* ***************************************************************************
 **    shift_register.c
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

/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

//  Global Includes
#include <htc.h>
#include <stdint.h>

//  Local Includes
#include "global.h"
#include "delay.h"
#include "shift_register.h"

/*****************************************************************************
 **File Variables 
 *****************************************************************************/
uint8_t rowMask[] = {0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
/*****************************************************************************
 ** Private Function Prototypes
 *****************************************************************************/

void PulseClock(void);
void PulseLatch(void);


/*****************************************************************************
 **Functions
 *****************************************************************************/

void ShiftRegInit(void){

    CLK_LOW();
    DATA_LOW();
    LATCH_LOW();

    CLK_TRIS = OUTPUT;
    DATA_TRIS = OUTPUT;
    LATCH_TRIS = OUTPUT;

}


void NextRow(void){
    PulseOut(display.row[display.presentRow].byte_2);
    PulseOut(display.row[display.presentRow].byte_1);
    PulseOut(rowMask[display.presentRow]);
    
    PulseLatch();
}

void PulseOut(uint8_t value){

     uint8_t i = 0;

    for(i = 0; i < 8; i++){

        ShiftInBit(value & (1 << i));
    }

}


void ShiftInBit(uint8_t c_bit){

    if(c_bit == 0){
        DATA_LOW();
    }else{
        DATA_HIGH();
    }

    PulseClock();

}

//Private Functions (not accessable outside of file)

void PulseClock(void){

    CLK_HIGH();
    DelayUs(1);
    CLK_LOW();

}

void PulseLatch(void){

    LATCH_HIGH();
    DelayUs(1);
    LATCH_LOW();

}



