/* ***************************************************************************
 **    DS1307.c
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
//  Global
#include <xc.h> 
#include <stdint.h>
#include <string.h>

//  Local
#include "global.h"
#include "DS1307.h"
#include "swI2C.h"
#include "display.h"
/*****************************************************************************
 **VARABLES
 *****************************************************************************/

/*****************************************************************************
 **FUNCTIONS
 *****************************************************************************/

uint8_t RTCInit(void){

    dateTime.tstring[2] = 58;// ':'
    dateTime.dstring[2] = 47; // '/'

    if (AckPolling(DS1307_ID)) { //check if rtc responds on i2c bus
        return(RTC_NOT_RESPONDING);
    }

    RTCGetDateTime();
    if (dateTime.sec > 60) { //check if oscillator is running
        //RTCStartClock();
        return(RTC_CLOCKHALT_BIT_SET);
    }

    return(RTC_INITIALIZED);  // everything checks out
}

void RTCStartClock(void){

    StartI2C(); // Issue start signal
    TransmitI2C(DS1307_ID); // Address
    TransmitI2C(RTC_SECONDS); // Start from address 0
    TransmitI2C(0x00);
    StopI2C();

}

void RTCStopClock(void){

    StartI2C(); // Issue start signal
    TransmitI2C(DS1307_ID); // Device
    TransmitI2C(RTC_SECONDS); // Address
    TransmitI2C(RTC_CH_BIT);
    StopI2C();

}

void RTCGetDateTime(void){

    uint8_t i2cBuffer;
    StartI2C(); // Issue start signal
    TransmitI2C(DS1307_ID); // Device
    TransmitI2C(RTC_SECONDS); // Address
    StartI2C(); // Issue repeated start signal
    TransmitI2C(0xD1); // Device plus R/W=1
    i2cBuffer = RecieveI2C(1); // Read seconds byte
    dateTime.sec = bcd_to_dec(i2cBuffer);
    i2cBuffer = RecieveI2C(1); // Read minutes byte
    dateTime.min = bcd_to_dec(i2cBuffer);
    i2cBuffer = RecieveI2C(1); // Read hours byte
    dateTime.hour = bcd_to_dec(i2cBuffer & 0x1F);
    i2cBuffer = RecieveI2C(1); // Read day of week byte
    dateTime.wday = bcd_to_dec(i2cBuffer);
    i2cBuffer = RecieveI2C(1); //Read date of month
    dateTime.mday = bcd_to_dec(i2cBuffer);
    i2cBuffer = RecieveI2C(1); // Read month byte
    dateTime.mon = bcd_to_dec(i2cBuffer);
    i2cBuffer = RecieveI2C(0); // Read last to digits of year byte
    dateTime.year = bcd_to_dec(i2cBuffer);
    StopI2C(); // Issue stop signal

    //RtcNumberToString(dateTime.hour,dateTime.min,dateTime.tstring);
    //RtcNumberToString(dateTime.mon,dateTime.mday,dateTime.dstring);

}

void RTCSetTime(void){
    uint8_t i2cBuffer;

    StartI2C(); // Issue start signal
    TransmitI2C(DS1307_ID); // Device
    TransmitI2C(RTC_SECONDS); // Address
    i2cBuffer = dec_to_bcd(dateTime.sec);
    TransmitI2C(i2cBuffer); //seconds
    i2cBuffer = dec_to_bcd(dateTime.min);
    TransmitI2C(i2cBuffer); //minutes
    i2cBuffer = dec_to_bcd(dateTime.hour);
    TransmitI2C(i2cBuffer | 0x40); //hours
    i2cBuffer = dec_to_bcd(dateTime.wday);
    TransmitI2C(i2cBuffer); //Day
    i2cBuffer = dec_to_bcd(dateTime.mday);
    TransmitI2C(i2cBuffer); //Date
    i2cBuffer = dec_to_bcd(dateTime.mon);
    TransmitI2C(i2cBuffer); //Month
    i2cBuffer = dec_to_bcd(dateTime.year);
    TransmitI2C(i2cBuffer); //Year
    StopI2C();

}

void RTCGetControl(void){

    StartI2C(); // Issue start signal
    TransmitI2C(DS1307_ID); // Device
    TransmitI2C(RTC_CONTROL); // Address
    StartI2C(); // Issue repeated start signal
    TransmitI2C(0xD1); // Device plus R/W=1
    dateTime.cntrl = RecieveI2C(0); // Read seconds byte
    StopI2C(); // Issue stop signal

}

void RTCSetControl(uint8_t value){

    StartI2C(); // Issue start signal
    TransmitI2C(DS1307_ID); // Device
    TransmitI2C(RTC_CONTROL); // Address
    TransmitI2C(value); //seconds
    StopI2C();

}


void RtcNumberToString(uint8_t number1, uint8_t number2,char *string){

    if (((number1) / 10) > 0) {
        if (number1 == 11) {
            string[0] = 34;// '"'
            string[1] = 34;// '"'
        } else {
            string[0] = 33;// '!'
            string[1] = (number1 % 10) + 48;// '0'
        }
    } else {
        string[0] = 32;// ' '
        string[1] = (number1 % 10) + 48;// '0'
    }
    string[3] = (number2 / 10) + 48;// '0'
    string[4] = (number2 % 10) + 48;// '0'
    string[5] = '\0';
}


void DateStringLong(void){

    uint8_t tstring[16];
    unsigned char number1, number2;
    int length;

    //RTCGetDateTime();
    // Blank the string
    tstring[0] = '\0';

    switch (dateTime.wday) {
        case 1: strcat(tstring, "MON ");
            break;
        case 2: strcat(tstring, "TUE ");
            break;
        case 3: strcat(tstring, "WED ");
            break;
        case 4: strcat(tstring, "THU ");
            break;
        case 5: strcat(tstring, "FRI ");
            break;
        case 6: strcat(tstring, "SAT ");
            break;
        case 7: strcat(tstring, "SUN ");
            break;
    }

    switch (dateTime.mon) {
        case 1: strcat(tstring, "JAN ");
            break;
        case 2: strcat(tstring, "FEB ");
            break;
        case 3: strcat(tstring, "MAR ");
            break;
        case 4: strcat(tstring, "APR ");
            break;
        case 5: strcat(tstring, "MAY ");
            break;
        case 6: strcat(tstring, "JUNE ");
            break;
        case 7: strcat(tstring, "JULY ");
            break;
        case 8: strcat(tstring, "AUG ");
            break;
        case 9: strcat(tstring, "SEPT ");
            break;
        case 10: strcat(tstring, "OCT ");
            break;
        case 11: strcat(tstring, "NOV ");
            break;
        case 12: strcat(tstring, "DEC ");
            break;
    }

    if (dateTime.mday < 10) number1 = 0;
    else number1 = dateTime.mday / 10;

    number2 = dateTime.mday - (number1 * 10);

    if (number1 > 0) {
        length = strlen(tstring);
        tstring[length] = number1 + 48;
        tstring[length + 1] = '\0';
    }

    length = strlen(tstring);
    tstring[length] = number2 + 48;
    tstring[length + 1] = '\0';

    if (number1 == 1) {
        strcat(tstring, "TH ");
    } else {
        if (number2 == 1) strcat(tstring, "ST ");
        else if (number2 == 2) strcat(tstring, "ND ");
        else if (number2 == 3) strcat(tstring, "RD ");
        else strcat(tstring, "TH ");
    }
    ScrollText(tstring);
    //return tstring;
}  // string length <= 14

uint8_t bcd_to_dec(uint8_t bcd){
    return(bcd & 0x0f) + ((bcd >> 4) * 10);
}

uint8_t dec_to_bcd(uint8_t dec){
    return(((dec / 10) << 4)+ (dec % 10));
}