/* ***************************************************************************
 **    system.h
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

#ifndef _SYSTEM_H_
#define _SYSTEM_H_
/******************************************************************************/
/* System Level #define Macros                                                */
/******************************************************************************/


#ifdef _18F1330

/****************************************************************************
 *Internal Oscillator Frequency Select                                      */
/****************************************************************************/
#define INT_OSC_32MHZ()  OSCCON = 0b11110011; NOP(); PLLEN = 0x01
#define INT_OSC_8MHZ()   OSCCON = 0b11110011
#define INT_OSC_4MHZ()   OSCCON = 0b11100011
#define INT_OSC_2MHZ()   OSCCON = 0b11010011
#define INT_OSC_1MHZ()   OSCCON = 0b11000011

/****************************************************************************/
/*Peripheral Disabling                                                      */
/****************************************************************************/

#define PINS_OFF()          LATA = 0x00; LATB = 0x00; TRISA = 0xFF; TRISB = 0xFF
#define PINS_DIGITAL()      ADCON1 &= 0xF0

#define ADC_OFF()           ADON = 0x00
#define COMPS_OFF()         CMCON = 0x00; CVRCON = 0x00
#define PWM_OFF()           PTEN = 0x00;PWMCON0 = 0x00
#define USART_OFF()         SPEN = 0x00
#define LVD_OFF()           LVDEN = 0x00
#define TIMERS_OFF()        TMR0ON = 0x00; TMR1ON = 0x00

#define PERIPHERALS_OFF()   ADC_OFF();COMPS_OFF();PWM_OFF();USART_OFF();LVD_OFF();TIMERS_OFF()

#endif // _18F1330

#ifdef  _18F2550

/****************************************************************************
 *Internal Oscillator Frequency Select                                      */
/****************************************************************************/
#define INT_OSC_8MHZ()   OSCCON = 0b11110011
#define INT_OSC_4MHZ()   OSCCON = 0b11100011
#define INT_OSC_2MHZ()   OSCCON = 0b11010011
#define INT_OSC_1MHZ()   OSCCON = 0b11000011

/****************************************************************************/
/*Peripheral Disabling                                                      */
/****************************************************************************/


#define CCP_OFF()               CCP1CON = OFF;CCP2CON = OFF
#define USB_OFF()               USBEN = OFF;UCFG = 0x08
#define MSSP_OFF()              SSPEN = OFF
#define UART_OFF()              SPEN = OFF
#define ADC_OFF()               ADON = OFF
#define COMPS_OFF()             CMCON |= 0x07;CVREN = OFF
#define HLVD_OFF()              HLVDEN = OFF

#define PINS_OFF()              LATA = OFF;LATB = OFF;LATC = OFF;TRISA = 0xFF;\
                                TRISB = 0xFF;TRISC = 0xFF

#define DIGITAL_PINS()          ADCON1 = 0x0F

#define PERIPHERALS_OFF()   	COMPS_OFF();ADC_OFF();CCP_OFF();MSSP_OFF();\
                                UART_OFF();HLVD_OFF()

#endif  //_18F2550

#ifdef _18F25J50

/****************************************************************************
 *Internal Oscillator Frequency Select                                      */
/****************************************************************************/
#define INT_OSC_8MHZ()   OSCCON = 0b11110011
#define INT_OSC_4MHZ()   OSCCON = 0b11100011
#define INT_OSC_2MHZ()   OSCCON = 0b11010011
#define INT_OSC_1MHZ()   OSCCON = 0b11000011

/****************************************************************************/
/*Peripheral Disabling                                                      */
/****************************************************************************/
#define RTCC_OFF()              RTCWREN = SET;RTCEN = OFF
#define CCP_OFF()               CCP1CON = OFF;CCP2CON = OFF
#define MSSP_OFF()              SSPEN1 = OFF; SSPEN2 = OFF
#define UART_OFF()              SPEN1 = OFF; SPEN2 = OFF
#define ADC_OFF()               ADON = OFF
#define USB_OFF()               USBEN = OFF;UCFG = 0x08
#define COMPS_OFF()             CON1 = OFF;CON2 = OFF;CVRCON = OFF
#define HLVD_OFF()              HLVDEN = OFF
#define CTMU_OFF()              CTMUEN = OFF

#define PINS_OFF()              LATA = 0x00;LATB = 0x00;LATC = 0x00;TRISA = 0xFF;\
                                TRISB = 0xFF;TRISC = 0xFF

#define DIGITAL_PINS()          ANCON0 = 0xFF;ANCON1 = 0x1F

#define PERIPHERALS_OFF()   	RTCC_OFF();CCP_OFF();MSSP_OFF();UART_OFF();ADC_OFF();\
                                COMPS_OFF();USB_OFF();HLVD_OFF();CTMU_OFF()

#endif

#ifdef _18F14K50

/****************************************************************************
 *Internal Oscillator Frequency Select                                      */
/****************************************************************************/
#define INT_OSC_8MHZ()   OSCCON = 0b11100011
#define INT_OSC_4MHZ()   OSCCON = 0b11010011
#define INT_OSC_2MHZ()   OSCCON = 0b11000011
#define INT_OSC_16MHZ()  OSCCON = 0b11110011
#define INT_OSC_1MHZ()   OSCCON = 0b10110011
#define INT_OSC_32MHZ()  OSCCON = 0b11100011;SPLLEN = 0x01
/****************************************************************************/
/*Peripheral Disabling                                                      */
/****************************************************************************/
#define ADC_OFF()       ADON = 0
#define COMPS_OFF()     C1ON = 0;C2ON = 0
#define MSSP_OFF()      SSPEN = 0x00
#define USB_OFF()       USBEN = 0x00;UCFG = 0x00
#define ECCP_OFF()      CCP1CON = 0x00
#define UART_OFF()      SPEN = 0x00
#define SRLATCH_OFF()   SRLEN = 0x00
#define FVR_OFF()       FVR1EN = 0x00;D1EN = 0x00

#define PERIPHERALS_OFF()       ADC_OFF();COMPS_OFF();MSSP_OFF();USB_OFF();\
                                ECCP_OFF();UART_OFF();SRLATCH_OFF();FVR_OFF()

#define PINS_OFF()      LATA = 0x00;LATB = 0x00;LATC = 0x00;TRISA = 0xFF;\
                        TRISB = 0xFF;TRISC = 0xFF
#define DIGITAL_PINS()  ANSEL = 0x00;ANSELH = 0x00

#endif //_18F14K50

#if defined _18F24K22 || defined _18F23K22

/****************************************************************************
 *Internal Oscillator Frequency Select                                      */
/****************************************************************************/
#define INT_OSC_64MHZ()     OSCCON = 0b11110011; NOP(); PLLEN = 0x01
#define INT_OSC_32MHZ()     OSCCON = 0b11100011; NOP(); PLLEN = 0x01
#define INT_OSC_16MHZ()     OSCCON = 0b11110011
#define INT_OSC_8MHZ()      OSCCON = 0b11100011
#define INT_OSC_4MHZ()      OSCCON = 0b11010011
#define INT_OSC_2MHZ()      OSCCON = 0b11000011
#define INT_OSC_1MHZ()      OSCCON = 0b10110011

/****************************************************************************/
/*Peripheral Disabling                                                      */
/****************************************************************************/
#define ADC_OFF()       ADON = 0x00
#define COMPS_OFF()     C1ON=0x00; C2ON=0x00
#define CTMU_OFF()      CTMUEN=0x00
#define CCP_OFF()       CCP1CON=0x00; CCP2CON=0x00; CCP3CON=0x00; CCP4CON=0x00; CCP5CON=0x00
#define MSSP_OFF()      SSPEN1=0x00; SSPEN2=0x00
#define UART_OFF()      SPEN1=0x00; SPEN2=0x00
#define SRLATCH_OFF()   SRLEN=0x00
#define FVR_OFF()       FVREN=0x00
#define DAC_OFF()       DACEN=0x00
#define HLVD_OFF()      HLVDEN=0x00

#define PERIPHERALS_OFF()   ADC_OFF();COMPS_OFF();CTMU_OFF();CCP_OFF();MSSP_OFF();\
                            UART_OFF();SRLATCH_OFF();FVR_OFF();DAC_OFF();HLVD_OFF()

#define PINS_OFF()      LATA = 0x00;LATB = 0x00;LATC = 0x00;TRISA = 0xFF;\
                        TRISB = 0xFF;TRISC = 0xFF
#define PINS_DIGITAL()  ANSELA = 0x00; ANSELB = 0x00, ANSELC = 0x00

#endif //_18F24K22


/******************************************************************************/
/* System Function Prototypes                                                 */
/******************************************************************************/

/* Custom oscillator configuration funtions, reset source evaluation
functions, and other non-peripheral microcontroller initialization functions
go here. */


void ExternalHardware(void);
void InitPeripherals(void);
void InitTimersAndInterrupts(void);
void InitHardwareVars(void);
#endif//_SYSTEM_H_