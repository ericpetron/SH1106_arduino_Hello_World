# SH1106_arduino_Hello_World
Starter code for using the SH1106 on an arduino, specifically this [one](https://www.microcenter.com/product/643965/inland-iic-spi-13-128x64-oled-v20-graphic-display-module-for-arduino-uno-r3
)

**STEPS**

1. Create a new sketch in the arduino IDE.

2. Download u8g2 library from the library manager in the arduino IDE

3. Copy the HelloWorldDisplay.ino contents into the Arduino IDE with the following pin config from user ```_r4z_``` in the microcenter reviews:
```
GND ==> GND

VCC ==> 5V

CLK ==> D13

MOSI ==> D11

RES ==> D8

DC ==> D9

CS ==> D10
```

4. Upload and it should work!
