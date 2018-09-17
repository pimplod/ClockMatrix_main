/* ***************************************************************************
 **   I2C.h
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

#ifndef _I2C_H_
#define	_I2C_H_

//#define I2CSTARTDELAY 50
//#define I2CSTOPDELAY  50
//#define I2CDATASETTLE 20
//#define I2CCLOCKHIGH  100
//#define I2CHALFCLOCK  50
//#define I2CCLOCKLOW   100
//#define I2CACKWAITMIN 50

#define I2CSTARTDELAY 15
#define I2CSTOPDELAY  15
#define I2CDATASETTLE 10
#define I2CCLOCKHIGH  25
#define I2CHALFCLOCK  10
#define I2CCLOCKLOW   25
#define I2CACKWAITMIN 15

#define I2C_DLY()     NOP()

void InitI2C(void);
void DelayI2C(unsigned char delay);
void StartI2C(void);
void StopI2C(void);
uint8_t RecieveI2C(char ack);
uint8_t TransmitI2C(unsigned char d);
uint8_t AckPolling(uint8_t device);
//int8_t DeviceByteWrite(uint8_t device, uint8_t regAddress, uint8_t data);
//int8_t DeviceByteRead(uint8_t device, uint8_t regAddress);
//int8_t DeviceWrites(uint8_t device, uint8_t regAddress, uint8_t *data, uint8_t length);
//int8_t DeviceReads(uint8_t device, uint8_t regAddress, uint8_t *data, uint8_t length);

#endif	/* _I2C_H_ */

