/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#include <xc.h>           /* Global Header File */
#include <stdint.h>        /* For uint8_t definition */
//#include <stdbool.h>       /* For true/false definition */
#include <string.h>

#include "global.h"
#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "display.h"
#include "swI2C.h"
#include "DS1307.h"
#include "delay.h"
#include "input.h"
#include "tmp75.h"
#include "game.h"
#include "fonts.h"
/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

//volatile unsigned char currentState = 1;
//volatile unsigned long milliseconds = 0;

//volatile uint8_t button_flag = FULL;
volatile bit temp_flag = 0;
volatile bit date_flag = 0;
bit colon_flag = 0;
uint8_t firstLoop;

uint8_t tempString[4];

__EEPROM_DATA(0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01);
/******************************************************************************/
/* Main Program                                                               */

/******************************************************************************/
void TimeNumerical(void);
void TemperatureDisplay(void);
void ScrollTime(void);
void BinaryTime(void);
void SecondsTime(void);
unsigned char Read_Eep(unsigned int badd);
void Write_Eep(unsigned int badd, unsigned char bdat);
void HandleButtons(void);

void main(void) {

    /* Initialize I/O and MCU Peripherals */
    InitPeripherals();
    /* Configure external hardware (i.e. -- ic's, sensors, displays)*/
    ExternalHardware();
    /*Configure Button Structure starting values*/
    InitHardwareVars();
    /* Configure MCU timers and interrupts needed*/
    InitTimersAndInterrupts();

    //    while(milliseconds < 1000) {
    //        if(button_1.latched == true && hold_time < milliseconds){
    //            InputTime();
    //            RTCSetTime();
    //        }else if(!button_1.latched){
    //            hold_time = milliseconds + 100;
    //        }
    //        if (BUTTON1 == CLEAR) {
    //            DEBOUND_LO(BUTTON1, DEBOUNCE_AMOUNT);
    //            DEBOUND_HI(BUTTON1, DEBOUNCE_AMOUNT);
    //            InputTime();
    //            RTCSetTime();
    //            DelayMs(500);
    //        }
    //    }

    currentState = Read_Eep(S_EEP_ADD);
    /* Main loop*/
    while (1) {

        if ((currentState < 1) || (currentState > MAIN_STATES)) {
            currentState = TIME_NUMERICAL;
        }

        switch (currentState) {
            case TIME_NUMERICAL:
                TimeNumerical();
                break;

            case TIME_STRING:
                ScrollTime();
                break;

            case SECONDS_TIME:
                SecondsTime();
                break;

            case TIME_BINARY:
                BinaryTime();
                break;

            case TEMP:
                TemperatureDisplay();
                break;

            case GAME:
                game_loop();
                break;

        }/**SWITCH(CURRENTSTATE)**/

        HandleButtons();

        if (previousState != currentState) {
            Write_Eep(S_EEP_ADD, currentState);
            previousState = currentState;
        }
    }/**WHILE**/
}/**MAIN**/

void HandleButtons(void) {
    static uint16_t holdTimer = 0;

    switch (currentState) {
        case TIME_NUMERICAL:
            if (button_0.pressed) {
                ClearButtons();
                date_flag ^= 0x01;
                firstLoop = SET;
            }
            if (button_1.latched == true && holdTimer < tmrCount) {
                InputTime();
                RTCSetTime();
                ClearButtons();
                return;
            }else if (button_1.latched == false) {
                holdTimer = tmrCount + 1000L;
            }
            if (button_1.pressed) {
                ClearButtons();
                currentState++;
                firstLoop = SET;
            }
            if (button_2.pressed) {
                ClearButtons();
                colon_flag ^= 0x01;
                firstLoop = SET;
            }
            break;

        case TIME_STRING:

            break;

        case SECONDS_TIME:
            if (button_1.pressed) {
                ClearButtons();
                currentState++;
                firstLoop = SET;
            }

            if (button_2.pressed) {
                ClearButtons();
                firstLoop = SET;
            }
            break;

        case TIME_BINARY:
            if (button_1.pressed) {
                ClearButtons();
                currentState++;
                firstLoop = SET;
            }
            break;

        case TEMP:
            if (button_1.pressed) {
                ClearButtons();
                currentState++;
                firstLoop = SET;
            }

            if (button_0.pressed) {
                ClearButtons();
                temp_flag = FAHRENHEIT;
                firstLoop = SET;
            }

            if (button_2.pressed) {
                ClearButtons();
                temp_flag = CELSIUS;
                firstLoop = SET;
            }

            break;

        case GAME:

            break;
    }
}

void TimeNumerical(void) {
    //uint8_t firstLoop = SET;
    static uint8_t prevSeconds = 0;

    if (firstLoop) {
        ClearDisplay();
        date_flag = CLEAR;
        colon_flag = CLEAR;
        firstLoop = CLEAR;
    }

    RTCGetDateTime();
    if ((prevSeconds != dateTime.sec) || firstLoop) {
        if (date_flag) {
            RtcNumberToString(dateTime.mon, dateTime.mday, dateTime.dstring);
            DisplayText(0, 1, dateTime.dstring);
        }else {
            if ((dateTime.sec % 2) && colon_flag) dateTime.tstring[2] = 32;
            else dateTime.tstring[2] = 58; // ':'
            RtcNumberToString(dateTime.hour, dateTime.min, dateTime.tstring);
            DisplayText(0, 1, dateTime.tstring);
        }
        display.cols[dateTime.sec / 4] |= (1 << 7);

        prevSeconds = dateTime.sec;
    }
}

void TemperatureDisplay(void) {
    static uint8_t prevTemp = 0;

    if (firstLoop) {
        firstLoop = CLEAR;
        prevTemp = 0;
    }

    LM75GetTemp();
    if ((temperature.celcsius != prevTemp) || firstLoop) {

        if (temp_flag) {
            NumberToString(temperature.fahrenheit, tempString);
            strcat(tempString, "F");
        }else {
            NumberToString(temperature.celcsius, tempString);
            strcat(tempString, "C");
        }

        DisplayText(2, 2, tempString);
        prevTemp = temperature.celcsius;
    }
}

void ScrollTime(void) {
    uint8_t state = 0;

    ClearDisplay();
    do {
        if (firstLoop) {
            RTCGetDateTime();
            LM75GetTemp();
            firstLoop = CLEAR;
        }
        switch (state) {
            case 0:
                ScrollText(string_IT_IS);
                state = 1;
                break;
            case 1:
                NumberToString(temperature.celcsius, tempString);
                strcat(tempString, "C");
                ScrollText(tempString);
                state = 2;
                break;
            case 2:
                ScrollText(string_AT);
                state = 3;
                break;
            case 3:
                RtcNumberToString(dateTime.hour, dateTime.min, dateTime.tstring);
                ScrollText(dateTime.tstring);
                state = 4;
                break;
            case 4:
                ScrollText(string_ON);
                state = 5;
                break;
            case 5:
                DateStringLong();
                state = 0;
                firstLoop = SET;
                break;
        }
    } while (currentState == TIME_STRING);
    firstLoop = SET;
}

void SecondsTime(void) {

    static uint8_t prevSeconds = 0;

    RTCGetDateTime();
    if ((prevSeconds != dateTime.sec) || firstLoop) {
        if ((dateTime.sec == 0x00) || firstLoop) {
            RtcNumberToString(dateTime.hour, dateTime.min, dateTime.tstring);
            DisplayText(0, 0, dateTime.tstring);
            firstLoop = CLEAR;
        }else {
            NumberToString(dateTime.sec, tempString);
            DisplayText(4, 1, tempString);
        }
        prevSeconds = dateTime.sec;
    }
}

void BinaryTime(void) {
    static uint8_t prevSec, prevMin, prevHr;

    if (firstLoop) {
        firstLoop = CLEAR;
        prevSec = 0xFF;
        prevMin = 0xFF;
        prevHr = 0xFF;
        ClearDisplay();
    }

    RTCGetDateTime();
    if ((prevSec != dateTime.sec) || firstLoop) {
        display.cols[10] = display.cols[11] = binFont[dateTime.sec / 10];
        display.cols[13] = display.cols[14] = binFont[dateTime.sec % 10];
        prevSec = dateTime.sec;
        if ((prevMin != dateTime.min) || firstLoop) {
            display.cols[5] = display.cols[6] = binFont[dateTime.min / 10];
            display.cols[8] = display.cols[9] = binFont[dateTime.min % 10];
            prevMin = dateTime.min;
            if ((prevHr != dateTime.hour) || firstLoop) {
                display.cols[0] = display.cols[1] = binFont[dateTime.hour / 10];
                display.cols[3] = display.cols[4] = binFont[dateTime.hour % 10];
                prevHr = dateTime.hour;
            }
        }
    }
}/***BINARYTIME***/

unsigned char Read_Eep(unsigned int badd) {
    EEADR = (badd & 0x0ff);
    EECON1bits.CFGS = 0;
    EECON1bits.EEPGD = 0;
    EECON1bits.RD = 1;
    Nop(); //Nop may be required for latency at high frequencies
    Nop(); //Nop may be required for latency at high frequencies
    return ( EEDATA); // return with read byte
}

void Write_Eep(unsigned int badd, unsigned char bdat) {
    char GIE_BIT_VAL = 0;
    EEADR = (badd & 0x0ff);
    EEDATA = bdat;
    EECON1bits.EEPGD = 0;
    EECON1bits.CFGS = 0;
    EECON1bits.WREN = 1;
    GIE_BIT_VAL = INTCONbits.GIE;
    INTCONbits.GIE = 0;
    EECON2 = 0x55;
    EECON2 = 0xAA;
    EECON1bits.WR = 1;
    while (EECON1bits.WR); //Wait till the write completion
    INTCONbits.GIE = GIE_BIT_VAL;
    EECON1bits.WREN = 0;
}