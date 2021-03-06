/* ***************************************************************************
 **    display.c
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

//  Global Includes
#include <xc.h>
#include <stdint.h>
#include <string.h>

//  Local Includes
#include "global.h"
#include "delay.h"
#include "fonts.h"
#include "display.h"
//#include "DS1307.h"
#include "input.h"

/*****************************************************************************
 ** Variables
 *****************************************************************************/
//extern volatile unsigned char currentState;

/*****************************************************************************
 **Functions
 *****************************************************************************/

void DisplayInit(void){

    CLK_LOW();
    DATA_LOW();
    LATCH_LOW();

    CLK_TRIS = OUTPUT;
    DATA_TRIS = OUTPUT;
    LATCH_TRIS = OUTPUT;

    ClearDisplay();
    display.activeRow = 0;
   // scrollDelay = 100;
}/***DISPLAYiNIT****/

void ShiftOutNextRow(void){

    CollumnData();
    RowData();
    //PulseOut(1 << db.activeRow);
    LATCH_HIGH();
    DelayUs(1);
    LATCH_LOW();
}/****NEXTrOW****/

void CollumnData(void){

    for (uint8_t x = 0; x < 15; ++x) {
        if (display.cols[14 - x] & (0x01 << display.activeRow)) {
            DATA_HIGH();
        } else {
            DATA_LOW();
        }
        CLK_HIGH();
        DelayUs(1);
        CLK_LOW();
    }
}/***COLLUMNdATA***/

void RowData(void){
    for (uint8_t y = 8; y > 0; --y) {
        if (display.activeRow == (y - 1)) {
            DATA_HIGH();
        } else {
            DATA_LOW();
        }
        CLK_HIGH();
        DelayUs(1);
        CLK_LOW();
    }
}/***ROWdATA***/

void ClearDisplay(void){

    // Initialise the display state
    for (uint8_t i = 0; i < 15; i++) {
        display.cols[i] = 0x00;
    }
}/****CLEARdISPLAY****/

void DisplayPlot(uint8_t x, uint8_t y, uint8_t state){
    // Check for out of bounds
    if (x > 14 || y > 7) {
        return;
    }

    if (state == ON) display.cols[x] |= (1 << y);
    else display.cols[x] &= ~(1 << y);
}/***DISPLAYpLOT***/


void DisplayText(uint8_t xStart, uint8_t yStart, const uint8_t * gString){
    int currentChar = 0;
    uint8_t string_index = 0;
    uint16_t char_index = 0;
    uint8_t char_width = 0;
    uint8_t x = 0;

    ClearDisplay();
    // Plot a display full of text
    for (x = xStart; x < 15; x++) {
        if (char_width == 0) {
            currentChar = gString[string_index++];
            if (currentChar == '\0') {
                char_width = 14;
                char_index = 0;
            } else {
                char_index = (currentChar - 32)*4;
                char_width = font3_1[ char_index + 3] + 1; // Include 1 empty column between chars.
            }
        }
        display.cols[x] = (font3_1[ char_index ] << yStart) & 0xFF;

        if (currentChar != '\0') {
            if (char_width > 2) {
                ++char_index;
            } else {
                char_index = 0; // Empty column.
            }
        }
        --char_width;
    }/*x loop*/
}/***DISPLAYtEXT***/

//void DisplayScrollText(void){
//    int currentChar = 0;
//    uint8_t string_index = 0;
//    uint16_t char_index = 0;
//    uint8_t char_width = 0;
//    uint8_t length;
//
//    length = (strlen(displayString));
//
//    ZERO_BUTTON_STATES();
//    while(string_index < length) {
//
//        if (char_width == 0) {
//            currentChar = displayString[string_index++];
//            if (currentChar == '\0') {
//                char_width = 14;
//                char_index = 0;
//            } else {
//                char_index = (currentChar - 32)*4;
//                char_width = font3_1[ char_index + 3] + 1; // Include 1 empty column between chars.
//            }
//        }
//
//        for (uint8_t i = 0; i < 14; i++) {
//            display.cols[i] = display.cols[i + 1];
//        }
//
//        display.cols[14] = font3_1[ char_index ] << 2;
//
//        if (currentChar != '\0') {
//            if (char_width > 2) {
//                ++char_index;
//            } else {
//                char_index = 0; // Empty column.
//            }
//        }
//        --char_width;
//
//        DelayMs(SCROLLDELAY);
//
//        ReadButtonState();
//
//        if(buttonState[BUTTON_1] == ON){
//            currentState++;
//            break;
//        }
//    }
//}/***DISPLAYsCROLLtEXT***/

void ScrollText(const uint8_t * gString){
    int currentChar = 0;
    uint8_t string_index = 0;
    uint16_t char_index = 0;
    uint8_t char_width = 0;
    uint8_t length;

    length = (strlen(gString));

    ZERO_BUTTON_STATES();
    while(string_index < (length +1)) {

        if (char_width == 0) {
            currentChar = gString[string_index++];
            if (currentChar == '\0') {
                char_width = 14;
                char_index = 0;
            } else {
                char_index = (currentChar - 32)*4;
                char_width = font3_1[ char_index + 3] + 1; // Include 1 empty column between chars.
            }
        }

        for (uint8_t i = 0; i < 14; i++) {
            display.cols[i] = display.cols[i + 1];
        }

        display.cols[14] = font3_1[ char_index ] << 1;

        if (currentChar != '\0') {
            if (char_width > 2) {
                ++char_index;
            } else {
                char_index = 0; // Empty column.
            }
        }
        --char_width;

        DelayMs(SCROLLDELAY);

        ReadButtonState();

        if(button_1.pressed){
            ClearButtons();
            currentState++;
            break;
        }
    }
}/***SCROLLtEXT***/


void NumberToString(uint16_t number, uint8_t *strPtr){

    uint8_t i = 0;
//    if (number / 10000) {
//        strPtr[i] = (number / 10000) % 10 + '0';
//        i++;
//    }
    if (number / 1000) {
        strPtr[i] = (number / 1000) % 10 + '0';
        i++;
    }
    if ((number / 100) || (i != 0)) {
        strPtr[i] = (number / 100) % 10 + '0';
        i++;
    }
    if ((number / 10) || (i != 0)) {
        strPtr[i] = (number / 10) % 10 + '0';
        i++;
    }

    strPtr[i] = number % 10 + '0';
    i++;
    strPtr[i] = '\0';
}/****NUMBERtOsTRING****/



