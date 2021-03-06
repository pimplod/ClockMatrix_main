/* ***************************************************************************
 **    tmp75.c
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
 **HEADER FILES
 *****************************************************************************/

//Compiler-Standard
#include <xc.h>
#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */
//#include <string.h>

//Project
#include "global.h"
#include "tmp75.h"
#include "swI2C.h"
//#include "display.h"
/*****************************************************************************
 **LOCAL FUNCTION PROTOTYPES
 *****************************************************************************/

/*****************************************************************************
 **VARIABLES
 *****************************************************************************/

/*****************************************************************************
 **FUNCTIONS
 *****************************************************************************/

uint8_t LM75Init(void){

    if(AckPolling(LM75_ID)){
        return(49);
    }

    StartI2C(); // Issue start signal
    TransmitI2C(LM75_ID); // Device
    TransmitI2C(LM75_TEMP_REGISTER); // Address
    StopI2C();

    LM75GetTemp();
    return (48);
}

void LM75GetTemp(void){

    uint16_t tempHi,tempLo;

    // Address pointer does not auto advance when register is read.
    // Re-read temperature without having to write address each iteration.
    StartI2C(); // Issue repeated start signal
    TransmitI2C(0x91); // Device plus R/W=1
    tempHi = RecieveI2C(1); // Read seconds byte
    tempLo = RecieveI2C(0);
    StopI2C(); // Issue stop signal

    temperature.celcsius = ((tempHi << 3)+(tempLo >> 5))*125/1000;
    temperature.fahrenheit = (temperature.celcsius * 180/100)+32;

}




