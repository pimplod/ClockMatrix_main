/* ***************************************************************************
 **    input.c
 **
 **  Project      :
 **  Target       :
 **  Description  :
 **
 **
 **  Compiler     : HI-TECH C  Version 9.80
 **  IDE          : MPLABX v1.80
 **  Created      : June 21, 2013
 **
 **  Master
 ** ***************************************************************************/

/*****************************************************************************
 **HEADER FILES
 *****************************************************************************/

//Compiler-Standard
#include <xc.h>
#include <stdint.h>        /* For uint8_t definition */
#include <string.h>

//Project
#include "global.h"
#include "input.h"
#include "display.h"
#include "delay.h"
#include "DS1307.h"

/*****************************************************************************
 **VARIABLES
 *****************************************************************************/

extern volatile unsigned long milliseconds;
extern volatile unsigned char currentState;

/*****************************************************************************
 **FUNCTIONS
 *****************************************************************************/

void InputTime(void){
    uint8_t daysInMonth;

    // Intro

    ScrollText(string_SETTIME);
    DelayMs(100);
    // Hour
    dateTime.hour = InputNumber("HOUR", 1, 12);
    // Minute
    dateTime.min = InputNumber("MIN", 0, 59);
    // Seconds set at 0
    dateTime.sec = 0;
    // Year
    dateTime.year = InputNumber("YEAR", 0, 99);
    //Month
    dateTime.mon = InputString("MON", 1, 12, month_str);
    switch (dateTime.mon) {
        case 1: daysInMonth = 31;
            break;
        case 2: daysInMonth = 28;
            break;
        case 3: daysInMonth = 31;
            break;
        case 4: daysInMonth = 30;
            break;
        case 5: daysInMonth = 31;
            break;
        case 6: daysInMonth = 30;
            break;
        case 7: daysInMonth = 31;
            break;
        case 8: daysInMonth = 31;
            break;
        case 9: daysInMonth = 30;
            break;
        case 10: daysInMonth = 31;
            break;
        case 11: daysInMonth = 30;
            break;
        case 12: daysInMonth = 31;
            break;
    }

    // If the month is February, check for leap year
    if (dateTime.mon == 2 && (dateTime.year % 400 == 0 ||
            (dateTime.year % 4 == 0 && dateTime.year % 100 != 0))) {
        daysInMonth = 29;
    }
    // Date
    dateTime.mday = InputNumber("DATE", 1, daysInMonth);
    // Day
    dateTime.wday = InputString("DAY", 1, 7, dow_str);

    DisplayText(0,1,string_DONE);
}

uint8_t InputNumber(const unsigned char *istring, uint8_t min, uint8_t max){
    unsigned char done = FALSE;
    uint8_t numberString[5];
    uint8_t result = min;
    uint8_t currentNumber = 0xFF;

    ZERO_BUTTON_STATES();


//    ClearDisplay();
//    ScrollText(istring);
//    ScrollText(string_leadIn);
    DisplayText(0,1,istring);
     DelayMs(500);
    while(!done) {

        // Get the current button states (with on and off debouncing)
        ReadButtonState();
        // Adjust the result accordingly
        if (buttonState[BUTTON_0] == ON) {
            result++;
            if (result > max) result = min;
        }
        if (buttonState[BUTTON_2] == ON) {
            if (result > min) result--;
            else result = max;
        }
        if (buttonState[BUTTON_1] == ON) done = TRUE;

        //change display with input
        if (currentNumber != result) {
            NumberToString(result, numberString);
             DisplayText(4,1,numberString);
            DelayMs(500);
            currentNumber = result;
        }
    }
    return result;
}

uint8_t InputString(const unsigned char *istring, uint8_t min, uint8_t max,  const char stringArray[][4]){
    uint8_t result = min;
    uint8_t currentNumber = 0xFF;
    unsigned char done = FALSE;

    ZERO_BUTTON_STATES();

//    ClearDisplay();
//    ScrollText(istring);
//    ScrollText(string_leadIn);
    DisplayText(0,1,istring);
     DelayMs(500);
    while(!done) {

        // Get the current button states (with on and off debouncing)
        ReadButtonState();
        // Adjust the result accordingly
        if (buttonState[BUTTON_0] == ON) {
            result++;
            if (result > max) result = min;
        }
        if (buttonState[BUTTON_2] == ON) {
            if (result > min) result--;
            else result = max;
        }
        if (buttonState[BUTTON_1] == ON) done = TRUE;

        //change display with input
        if (currentNumber != result) {
            DisplayText(2,1,stringArray[result]);
            DelayMs(500);
            currentNumber = result;
        }
    }
    return result;
}

void ReadButtonState(void){
    if (buttonState[BUTTON_0] == OFF && BUTTON0 == OFF) {
        DEBOUND_LO(BUTTON0, DEBOUNCE_AMOUNT);
        DEBOUND_HI(BUTTON0, DEBOUNCE_AMOUNT);
        buttonState[BUTTON_0] = ON;
    } else if (buttonState[BUTTON_0] == ON && BUTTON0 == ON) {
        DEBOUND_HI(BUTTON0, DEBOUNCE_AMOUNT);
        buttonState[BUTTON_0] = OFF;
    }
    if (buttonState[BUTTON_2] == OFF && BUTTON2 == OFF) {
        DEBOUND_LO(BUTTON2, DEBOUNCE_AMOUNT);
        DEBOUND_HI(BUTTON2, DEBOUNCE_AMOUNT);
        buttonState[BUTTON_2] = ON;
    } else if (buttonState[BUTTON_2] == ON && BUTTON2 == ON) {
        DEBOUND_HI(BUTTON2, DEBOUNCE_AMOUNT);
        buttonState[BUTTON_2] = OFF;
    }
    if (buttonState[BUTTON_1] == OFF && BUTTON1 == OFF) {
        DEBOUND_LO(BUTTON1, DEBOUNCE_AMOUNT);
        DEBOUND_HI(BUTTON1, DEBOUNCE_AMOUNT);
        buttonState[BUTTON_1] = ON;
    } else if (buttonState[BUTTON_1] == ON && BUTTON1 == ON) {
        DEBOUND_HI(BUTTON1, DEBOUNCE_AMOUNT);
        buttonState[BUTTON_1] = OFF;
    }
}

