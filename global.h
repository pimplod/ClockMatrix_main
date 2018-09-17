/* ***************************************************************************
 **    global.h
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
 ** ************************************************************************** */

#ifndef _GLOBAL_H_
#define _GLOBAL_H_

#include <xc.h>
#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

/******************************************************************************/
/* MICRCONTROLLER FOSC                                                        */
/******************************************************************************/

#ifdef _BOOTLOADER
#define _XTAL_FREQ 48000000L
#else
#define _XTAL_FREQ 48000000L
#endif

#define SYS_FREQ _XTAL_FREQ
#define FCY SYS_FREQ / 4
#define CLOCKCYCLES_PER_MICROSECOND() (_XTAL_FREQ / 1000000L)
#define CLOCKCYCLES_TO_MICROSECONDS(a) (((a)*1000L) / (_XTAL_FREQ / 1000L))
#define MICROSECONDS_TO_CLOCKCYCLES(a) (((a) * (_XTAL_FREQ / 1000L)) / 1000L)
#define INSTRUCTIONS_PER_MICROSECONDS() (FCY / 1000000L)
#define MICROSECONDS_TO_INSTRUCTIONS(a) (((a) * (FCY / 1000L)) / 1000L)

/******************************************************************************/
/*  Global Macros                                                             */
/******************************************************************************/
#define INPUT 0xFF
#define OUTPUT 0x00
#define ANALOG 0xFF
#define DIGITAL 0x00
#define HIGH 0xFF
#define LOW 0x00

#ifndef TRUE
#define TRUE 0x01
#define FALSE 0x00
#endif //TRUE
#define ON 0x01
#define OFF 0x00
#define SET 0x01
#define CLEAR 0x00
#define FULL 0xFF

#define BIT(x) (0x01 << (x))
#define CELSIUS 0x00
#define FAHRENHEIT 0x01
#define FLOATING_PIN PORTCbits.AN8
#define FLOATING_TRIS TRISC6
#define FLOATING_ANSEL ANS8
/******************************************************************************/
/* State Machine Macros                                                        */
/******************************************************************************/

#define TIME_NUMERICAL 1
#define TIME_STRING 2
#define SECONDS_TIME 3
#define TIME_BINARY 4
#define TEMP 5
#define GAME 6

#define MAIN_STATES 6

#define STATE_EEPROM_ADDRESS 0x01
#define S_EEP_ADD 0
/******************************************************************************/
/* Hardware                                                                   */
/******************************************************************************/
#define SCROLLDELAY 100
/*************************************I2C**************************************/

#define sDA PORTBbits.RB4
#define SDA LATB4
#define SDA_TRIS TRISB4
#define SDA_HI (SDA_TRIS = INPUT)
#define SDA_LOW (SDA_TRIS = OUTPUT)

#define sCL PORTBbits.RB6
#define SCL LATB6
#define SCL_TRIS TRISB6
#define SCL_HI (SCL_TRIS = INPUT)
#define SCL_LOW (SCL_TRIS = OUTPUT)

#define SDA_LAT SDA
#define SCL_LAT SCL

/*********************************BUTTONS_INPUT********************************/

#define BUTTON0_TRIS TRISC2
#define BUTTON2_TRIS TRISC0
#define BUTTON1_TRIS TRISC1
#define BUTTON0 PORTCbits.RC2
#define BUTTON2 PORTCbits.RC0
#define BUTTON1 PORTCbits.RC1
#define BUTTONS_LEN 3

#define DEBOUND_HI(PIN, COUNT)                          \
    WRITETIMER1(0);      /* reset timer              */ \
    while (TMR1 < COUNT) /* wait until debounce time */ \
        if (PIN == 0)    /*   if input low,          */ \
    WRITETIMER1(0)       /*     restart wait         */

#define DEBOUND_LO(PIN, COUNT)                          \
    WRITETIMER1(0);      /* reset timer              */ \
    while (TMR1 < COUNT) /* wait until debounce time */ \
        if (PIN == 1)    /*   if input high,         */ \
    WRITETIMER1(0)       /*     restart wait         */

#define DEBOUNCE_AMOUNT 1000
#define BUTTON_0 0
#define BUTTON_1 1
#define BUTTON_2 2

/*************************SHIFT REGISTERS**************************************/

#define CLK LATC3
#define DATA LATC4
#define LATCH LATC5

#define CLK_TRIS TRISC3
#define DATA_TRIS TRISC4
#define LATCH_TRIS TRISC5

#define CLK_HIGH() (CLK = SET)
#define CLK_LOW() (CLK = CLEAR)
#define DATA_HIGH() (DATA = SET)
#define DATA_LOW() (DATA = CLEAR)
#define LATCH_HIGH() (LATCH = SET)
#define LATCH_LOW() (LATCH = CLEAR)

extern volatile unsigned char currentState;
extern volatile unsigned char previousState;
extern volatile unsigned long milliseconds;
extern volatile unsigned long tmrCount;
/*******************************DISPLAY***************************************/

//unsigned char displayString[64];

typedef struct dispBuffer{
    unsigned char cols[15];
    unsigned char activeRow;
} t_display;

extern volatile t_display display;



/*********************************DS1307**************************************/

typedef struct RTCStruct
{
    unsigned char sec;   // BCD for seconds, 00-59
    unsigned char min;   // BCD for minutes, 00-59
    unsigned char hour;  // BCD for hours, 00-24
    unsigned char wday;  // BCD for day of the week, 00-06
    unsigned char mday;  // BCD for day of the month, 01-31
    unsigned char mon;   // BCD for month, 01-12
    unsigned char year;  // BCD for year, 00-99
    unsigned char cntrl; // Control of sqwave output

    char tstring[6];
    char dstring[6];

} t_dateTime;

extern  t_dateTime dateTime;
/**************************TMP75**********************************************/



typedef struct TempStruct
{
    unsigned char celcsius;
    unsigned char fahrenheit;
} t_temperature;

extern volatile t_temperature temperature;

extern volatile uint8_t buttonState[3];

#define ZERO_BUTTON_STATES()     \
    buttonState[BUTTON_0] = OFF; \
    buttonState[BUTTON_2] = OFF; \
    buttonState[BUTTON_1] = OFF

typedef struct buttonStruct {
    struct {
        unsigned down : 1; //button pressed down
        unsigned latched : 1; //button held down
        unsigned pressed : 1; //button pressed/held/and released
        unsigned : 5;
    };
    volatile unsigned char * port;
    uint8_t pin;
    int16_t debounce;
} t_button;

extern volatile t_button button_0;
extern volatile t_button button_1;
extern volatile t_button button_2;
extern volatile t_button* buttons[];

/****************************RANDOM GENERATION*********************************/

void ClearButtons(void);
void ButtonCheck(void);
#endif //_GLOBAL_H_
