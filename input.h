/* ***************************************************************************
 **    input.h
**
 **  Project      : ClockMatrix_v0
 **  Target       : PIC18F14K50
 **  Description  : Project used to develop clock firmware.  Tested methods and
 **                 determined functionality (needed, wanted, and the possible)
 **
 **  Compiler     : HI-TECH C  Version 9.80
 **  IDE          : MPLABX v1.80
 **  Created      : June 21, 2013
 **
 **  Master
 ** ***************************************************************************/

#ifndef _INPUT_H_
#define  _INPUT_H_


const uint8_t string_SETTIME[] = "**SET TIME**";
const uint8_t string_DONE[] = "DONE";

 const char dow_str[][4] = {
    "   ",
    "MON",
    "TUE",
    "WEN",
    "THU",
    "FRI",
    "SAT",
    "SUN"
};

 const char month_str[][4] = {
    "   ",
    "JAN",
    "FEB",
    "MAR",
    "APR",
    "MAY",
    "JUN",
    "JUL",
    "AUG",
    "SEP",
    "OCT",
    "NOV",
    "DEC"
};
 

uint8_t InputString(const unsigned char *istring, uint8_t min, uint8_t max,const char stringArray[][4]);
uint8_t InputNumber(const unsigned char *istring, uint8_t min, uint8_t max);
void ReadButtonState(void);
void InputTime(void);
//void InputTimerDigit(uint8_t *num_ptr, uint8_t min, uint8_t max);
//void SetTimer(void);
//void CheckButton(void);

#endif //_INPUT_H_
