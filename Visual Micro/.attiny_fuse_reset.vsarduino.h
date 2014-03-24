/* 
	Editor: http://www.visualmicro.com
	        arduino debugger, visual micro +, free forum and wiki
	
	Hardware: Arduino Uno, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

//
//
byte shiftOut (byte val1, byte val2);
void writeFuse (unsigned int fuse, byte val);
void readFuses ();
unsigned int readSignature ();

#include "D:\Soft\arduino-1.0.3\hardware\arduino\variants\standard\pins_arduino.h" 
#include "D:\Soft\arduino-1.0.3\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\Vyacheslav\Documents\Arduino\attiny_fuse_reset\attiny_fuse_reset.ino"
