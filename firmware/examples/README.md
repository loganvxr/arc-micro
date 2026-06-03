# MCU Specifications
The STC15F2K60S2 contains an 8051 CPU. You **cannot** use the standard Arduino IDE for this microcontroller. Since you cannot use the Arduino IDE you cannot use the standard `Arduino.h`, or libraries dependent on `Arduino.h`. 

To compile C or Assembly code for your project, use [SDCC](https://sdcc.sourceforge.net/).

Flash Program Memory: 60KB (Supports ISP & IAP)  
SRAM: 2.5KB   
EEPROM: 256-512 bytes (>100,000 erase/write cycles)  
