#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_SH1106_128X64_NONAME_F_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  // u8g2.setFlipMode(1); // Used to flip the display, uncomment this to flip it
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_samim_16_t_all);
  u8g2.drawStr(0,20, "Hello World");	// write something to the internal memory
  u8g2.sendBuffer();
  delay(1000);
}