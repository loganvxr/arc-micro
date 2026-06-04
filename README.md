# Arc Micro
Arc Micro features a STC15F2K60S2 with 60KB of flash memory, and built-in EEPROM. There are 34 standard use GPIO pins with a USB-C port to easily flash new firmware to your device.

![image.png](images/image.png)

## General Usage
To start writing firmware for your microcontroller you can use [SDCC](https://sdcc.sourceforge.net/) and write code in C or Assembly. 

_Note: C++ & Python are only **partially** supported by SDCC. Please use with caution._

To flash code to your microcontroller, you can use the [STC ISP](https://www.stcmicro.com/rjxz.html). (*You can use the open source version as well. [https://github.com/grigorig/stcgal](https://github.com/grigorig/stcgal)*)

## Bill of Materials
| Component | Part Number | Quantity |
| :--- | :--- | :--- |
| 4.7µF Capacitor | 50YXF4R7MEFC5X11 | 1 |
| 10µF Capacitor | 50YXF10MEFC5X11 | 1 |
| 100nF Capacitor | CC1H104ZA1ED3F5P1100 | 1 |
| 13-Pin Female Headers | 2.54-1*13P | 1 |
| 5.1kΩ Resistor | MF1/2W-5.1KΩ±1%T52 | 2 |
| 10kΩ Resistor Array (SIP-9) | A09-103JP | 1 |
| STC15F2K60S2-28I-PDIP40 | STC15F2K60S2-28I-PDIP40 | 1 |
| 20-Pin Female Headers | 254PM-1x20P-V | 1 |
| 1µF Capacitor | FG24X7R1H105KRT06 | 1 |
| CP2102N USB-UART Bridge | CP2102N-A02-GQFN20 | 1 |
| USB-C Port | TYPE-C-31-M-12 | 1 |
| 10kΩ Resistor | MF1/4W-10KΩ±1%-ST52 | 1 |