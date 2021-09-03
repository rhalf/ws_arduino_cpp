//#include< file_name > Header File or Standard files
//#include" file_name " user defined files
#include <Arduino.h>
// macro with parameter
#define AREA(a, b) (a * b)
void setup() {
  Serial.begin(9600);
  Serial.println("area:" + String(AREA(3,4)));
  check();
}
void check() {
#ifdef __AVR_ATmega328P__
  Serial.println("is set to ATmega328P!");
#endif
#ifndef __AVR_ATmega2560__
  Serial.println("is not set to ATmega2560!");
#endif
}
void loop() {}
