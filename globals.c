/* ************************************************************************//**
 *  @File:
 *
 *     globals.c
 *
 *  @Project: 
 *
 *     TODO -> Project Name %<%PROJECT_NAME%>% %<%DEFAULT_NAME%>%
 *
 *  @Description:
 *
 *     Target       : TODO -> Provide MCU
 *     Compiler     : XC8
 *     IDE          : MPLABX v3.35
 *     Created      : September 17, 2018
 *
 *  R Hanlen <implod@gmail.com>
 * ***************************************************************************/

/* ************************************************************************//**
 *              @Section: INCLUDED FILES
 *****************************************************************************/

//Compiler-Standard
#include <xc.h>
#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

//Project
#include "global.h"

/* ***********************************************************************//**
 *              @Section: GLOBAL VARIABLES
 *****************************************************************************/
volatile t_display display;
t_dateTime dateTime;
volatile t_temperature temperature;
volatile t_button button_0;
volatile t_button button_1;
volatile t_button button_2;
volatile t_button* buttons[BUTTONS_LEN];
volatile uint8_t buttonState[3];

volatile unsigned char currentState = 1;
volatile unsigned char previousState = 1;
volatile unsigned long milliseconds = 0;
volatile unsigned long tmrCount = 0;


/* ***********************************************************************//**
 *              @Section: FUNCTION DEFINITIONS
 *****************************************************************************/

void ClearButtons(void) {

    for (uint8_t i = 0; i < BUTTONS_LEN; i++) {
        buttons[i]->pressed = false;
        buttons[i]->debounce = 0;
    }
}

void ButtonCheck(void) {
    buttons[0]->down = !(BUTTON0);
    buttons[1]->down = !(BUTTON1);
    buttons[2]->down = !(BUTTON2);

    //        for (uint8_t i = 0; i < BUTTONS_LEN; i++) {
    //            buts[i]->down = ((*(buts[i]->port) & (1 << (buts[i]->pin))) != 0);
    //        }

    for (uint8_t i = 0; i < BUTTONS_LEN; i++) {
        if (buttons[i]->debounce > tmrCount)
            continue;
        if (buttons[i]->down == true && buttons[i]->latched == false) {
            buttons[i]->latched = true;
            buttons[i]->debounce = tmrCount + 30;
        }
        if (buttons[i]->down == false && buttons[i]->latched == true) {
            buttons[i]->pressed = true;
            buttons[i]->latched = false;
        }
    }
}





