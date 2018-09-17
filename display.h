/* ***************************************************************************
 **    display.h
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

#ifndef _DISPLAY_H_
#define  _DISPLAY_H_
const uint8_t string_IT_IS[] = "IT IS ";
const uint8_t string_AT[] = " AT ";
const uint8_t string_ON[] = " ON ";
//const uint8_t string_leadIn[] = "     ";

void ShiftOutNextRow(void);
void CollumnData(void);
void RowData(void);
void DisplayInit(void);
void ClearDisplay(void);
void DisplayPlot(unsigned char x, unsigned char y, unsigned char state);
void DisplayText(uint8_t xStart, uint8_t yStart,const uint8_t * gString);

void ScrollText(const uint8_t * gString);
void NumberToString(uint16_t number, uint8_t *strPtr);
#endif //_DISPLAY_H_
