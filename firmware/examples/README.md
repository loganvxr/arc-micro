# MCU Specifications
The STC15F2K60S2 contains an 8051 CPU. You **cannot** use the standard Arduino IDE for this microcontroller. Since you cannot use the Arduino IDE you cannot use the standard `Arduino.h`, or libraries dependent on `Arduino.h`. 

As stated in the main README, SDCC does not **fully** support Python or C++ however Assembly and C are both supported.

To build a hex file for your project please install the following tools:
- SDCC (`sudo apt install sdcc`)
- PackIHX (included with SDCC)

Then run the `arc-builder.sh build <files>` script. It will automatically build all dependencies and your code.

Finally, flash the HEX file to your board using the [STC-ISP](https://www.stcmicro.com/rjxz.html). 

_Note: A custom flasher is coming soon._ 

## Other Specs
Flash Program Memory: 60KB (Supports ISP & IAP)  
SRAM: 2.5KB   
EEPROM: 256-512 bytes (>100,000 erase/write cycles)  
