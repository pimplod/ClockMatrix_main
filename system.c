/* ***************************************************************************
 **  system.c
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

#include <xc.h>           /* HiTech General Includes */
#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

#include "global.h"
#include "system.h"
#include "display.h"
#include "swI2C.h"
#include "DS1307.h"
#include "tmp75.h"

/*****************************************************************************
 ** Functions
 *****************************************************************************/







void InitPeripherals(void){

    //Disable Global Interrupts
    di();

    //PUT MCU IN KNOWN/STARTING STATE
    //Turning off all Modules/Pins and Ports
    PINS_OFF();
    DIGITAL_PINS();
    PERIPHERALS_OFF();

    //Buttons are for user input;
    BUTTON0_TRIS = INPUT;
    BUTTON2_TRIS = INPUT;
    BUTTON1_TRIS = INPUT;

    //Pin Used To Generate Randomness
    FLOATING_ANSEL = ANALOG;
    FLOATING_TRIS = INPUT;
}

void ExternalHardware(void){

    DisplayInit();
    InitI2C();
    RTCInit();
    LM75Init();

}

void InitTimersAndInterrupts(void){

    di();

    /*******Input Buttons*********/

    //Button pins are external interrupts with edge triggers
    //Setting triggers to falling edge
    //    INTEDG0 = 0;
    //    INTEDG1 = 0;
    //    INTEDG2 = 0;
    //Clear flags
    //    INT0IF = CLEAR;
    //    INT1IF = CLEAR;
    //    INT2IF = CLEAR;
    //Set Priority Low
    //    INT1IP = LOW;
    //    INT2IP = LOW;
    //Enable
    //    INT0IE = ON;
    //    INT1IE = ON;
    //    INT2IE = ON;

    /*Set up interrupt on timer0 to update the display
     *Each call to the interrupt updates a single column
     *and we want each column to be lit for  approx 200 microseconds...*/

    /*  FOSC = 48000000  */
    // Fosc is 48,000,000 so Fosc/4 is 12,000,000 ticks/sec
    // of 12 ticks/usec. With 1:16 prescale every timer tick is 1.3 usecs
    // 256 ticks is approx 300 microseconds
    TMR0L = 0; // Reset the timer0 counter
    INTCONbits.TMR0IF = 0; // Clear the interrupt flag
    T0CON = 0b11000011; // Timer0 on, 8-bit and 1:16 prescaler
    INTCON2bits.TMR0IP = 1; // Set priority high
    INTCONbits.TMR0IE = 1; // Enable the timer0 interrupt


    /**********Timer3***********/

    // FOSC/4 = 12MHz -> 12,000,000 ticks/sec -> 12,000 ticks/msec
    // Timer interrupts when = 65536.  65536 - 12000 = 53536
    // Reset timer value to 53536 for 1 millisecond tick.
    WRITETIMER3(53536);
    PIR2bits.TMR3IF = CLEAR; // Clear the interrupt flag
    T3CON = 0b10000001; //16-bit enabled, 1:1 Prescaler, Fosc/4 clock, Timer3 on
    IPR2bits.TMR3IP = 0; // Set priority low
    PIE2bits.TMR3IE = ON; // Enable the timer3 interrupt


    /*****************Timer1****************/
    WRITETIMER1(0);
    T1CON = 0b10110001;
    //1-------      16 bit Enabled
    //--11----      1:8 Prescale
    //------0-      Fosc/4 is clock source
    //-------1      On/Enabled

     /*******************ADC********************/

    ADCON0 = 0b00100001;
             //--1000--         AN8 Selected as Channel
             //-------1         ADC is Enabled
    ADCON1 = 0b00000000;
             //----00--         Vdd is Positive Reference
             //------00         Vsss is Negative Reference
    ADCON2 = 0b10010110;
             //1-------         Result is Right Justified
             //--010---         4 Tad Acquisition Time
             //-----110         FOSC/64 is Conversion Clock
    

    /*****************ENABLE INTERUPTS**************/
    // enable interrupt priority
    RCONbits.IPEN = 1;
    // enable  low priority/peripheral interrupts
    INTCONbits.GIEL = 1;
    //Turn on Global Interrupts
    ei();
}

void InitHardwareVars(void) {
   

    button_0.down = false;
    button_0.latched = false;
    button_0.pressed = false;
    button_0.port = &PORTC;
    button_0.pin = 2;
    button_0.debounce = 0;

    button_1.down = false;
    button_1.latched = false;
    button_1.pressed = false;
    button_1.port = &PORTC;
    button_1.pin = 1;
    button_1.debounce = 0;
    
    button_2.down = false;
    button_2.latched = false;
    button_2.pressed = false;
    button_2.port = &PORTC;
    button_2.pin = 0;
    button_2.debounce = 0;

    buttons[0] = &button_0;
    buttons[1] = &button_1;
    buttons[2] = &button_2;

}