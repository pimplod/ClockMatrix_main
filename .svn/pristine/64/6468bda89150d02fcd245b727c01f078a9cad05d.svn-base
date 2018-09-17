/* ***************************************************************************
 **    DS1307.h
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

#ifndef _DS1307_H_
#define  _DS1307_H_

/*****************************************************************************
 **DEVICE MACROS
 *****************************************************************************/
//i2c device address
#define DS1307_ID   0xD0

//device register addresses
#define RTC_SECONDS 0x00
    #define RTC_CH_BIT           (0x80)
#define RTC_MINUTES 0x01
#define RTC_HOURS   0x02
    #define RTC_HOURMODE_BIT     (0x40)
    #define RTC_AM_PM_BIT        (0x20)
#define RTC_DAY     0x03
#define RTC_DATE    0x04
#define RTC_MONTH   0x05
#define RTC_YEAR    0x06
#define RTC_CONTROL 0x07
    #define RTC_OUT_BIT          (0x80)
    #define RTC_SQWE_BIT         (0x10)
    #define RTC_RS1_BIT          (0x02)
    #define RTC_RS0_BIT          (0x01)
#define RTC_RAM_START        0x08
#define RTC_RAM_END          0x3F

#define MAX_SEC         	(0x59) /* BCD codification for seconds, 00-59 */
#define MAX_MIN         	(0x59)/* BCD codification for minutes, 00-59 */
#define MIN_HOUR                (0x01)
#define MAX_HOUR        	(0x12)/* BCD codification for hours, 00-23 */
#define MIN_DAY                 (0x01)
#define MAX_DAY                 (0x07)/* BCD codification for day of week, 01-07 */
#define MIN_MON         	(0x01)
#define MAX_MON         	(0x12)/* BCD codification for month, 01-12 */
#define MIN_DATE        	(0x01)
#define MAX_DATE        	(0x31) /* BCD codification for date of month, 01-31 */
#define MAX_YEAR        	(0x99)/* BCD codification for year, 00-99 */

#define RTC_1HZ_SQW              (0x00)
#define RTC_4kHz_SQW             (0x01)
#define RTC_8kHz_SQW             (0x02)
#define RTC_32kHz_SQW            (0x03)

#define RTC_INITIALIZED          48
#define RTC_NOT_RESPONDING       49 /* Not Acknowledging on i2c bus */
#define RTC_CLOCKHALT_BIT_SET    50 /*Clock not running, time is not set*/

/*****************************************************************************
 **FUNCTION PROTOTYPES
 *****************************************************************************/

uint8_t RTCInit(void);
void RTCStartClock(void);
void RTCStopClock(void);
void RTCGetDateTime(void);
void RTCSetTime(void);
void RTCGetControl(void);
void RTCSetControl(uint8_t value);
void RtcNumberToString(uint8_t number1, uint8_t number2,char *string);
void DateStringLong(void);
uint8_t bcd_to_dec(uint8_t bcd);
uint8_t dec_to_bcd(uint8_t dec);
#endif //_DS1307_H_
