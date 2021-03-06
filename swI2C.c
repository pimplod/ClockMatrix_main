/* ***************************************************************************
 **   I2C.c
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



//      Global Includes
#include <xc.h> 
#include <stdint.h>

//      Local Includes
#include "global.h"
#include "delay.h"
#include "swI2C.h"



void InitI2C(void) {

    SCL = 0;
    SDA = 0;
    SDA_HI;
    SCL_HI;
}

void DelayI2C(unsigned char delay){

    DelayUs(delay);
}

//////////////////////////////////////////////////////////////////////
// Start command
//
// SDA 1-0-0
// SCL 1-1-0
void StartI2C(void) {
    SDA_HI; // i2c start bit sequence
    SCL_HI;
    SDA_LOW;
    DelayI2C(I2CSTARTDELAY);
    SCL_LOW;
    DelayI2C(I2CCLOCKLOW);
}

//////////////////////////////////////////////////////////////////////
// Stop command
//
// SDA 0-0-1
// SCL 0-1-1
//
void StopI2C(void) {
    SDA_LOW; // i2c stop bit sequence
    SCL_HI;
    DelayI2C(I2CSTOPDELAY);
    SDA_HI;
    I2C_DLY();
}

uint8_t RecieveI2C(char ack){
    unsigned char bitNo, byte = 0;

    SDA_HI;
    for (bitNo = 0; bitNo < 8; bitNo++) {
        DelayI2C(I2CDATASETTLE);
        byte <<= 1;

        SCL_HI;
        while(sCL == LOW); // wait for any SCL clock stretching
        DelayI2C(I2CHALFCLOCK);

        if (sDA == SET) {
            byte += 1;
        }
        DelayI2C(I2CHALFCLOCK);
        SCL_LOW;
        DelayI2C(I2CCLOCKLOW);
    }

    if (ack) {
        SDA_LOW;
    } else {
        SDA_HI;
    }

    DelayI2C(I2CDATASETTLE);
    SCL_HI;
    DelayI2C(I2CCLOCKHIGH); // send (N)ACK bit
    SCL_LOW;
    DelayI2C(I2CCLOCKLOW);
    SDA_HI;
    DelayI2C(I2CDATASETTLE);
    return byte;
}

uint8_t TransmitI2C(uint8_t byte) {
    uint8_t bitNo;
    uint8_t ack;

    for (bitNo = 0; bitNo < 8; bitNo++) {
        if (byte & 0x80) {
            SDA_HI;
        }
        else {
            SDA_LOW;
        }
        DelayI2C(I2CDATASETTLE);

        SCL_HI;
        DelayI2C(I2CCLOCKHIGH);
        SCL_LOW;
         DelayI2C(I2CCLOCKLOW);

         byte <<= 1;
    }
    SDA_HI;
    SCL_HI;
    DelayI2C(I2CHALFCLOCK);
    ack = sDA; // possible ACK bit
    DelayI2C(I2CHALFCLOCK);
    SCL_LOW;
    DelayI2C(I2CCLOCKLOW);
    return ack;
}

uint8_t AckPolling(uint8_t device){

    StartI2C();

    if (TransmitI2C(device)){
        StopI2C();
        StartI2C();

        if (TransmitI2C(device)){
            StopI2C();
            return(1);
        }else{
            StopI2C();
            return(0);
        }
    }else{
   StopI2C();
   return(0);
    }
}


