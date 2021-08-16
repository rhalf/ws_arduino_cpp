//#include< file_name > Header File or Standard files
//#include" file_name " user defined files

#include <Arduino.h>

// macro definition
#define LIMIT 5
//#undef LIMIT

// macro with parameter
#define AREA(l, b) (l * b)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  check();

  uint8_t result = AREA(3,4);
  Serial.print("result:");
  Serial.println(result);
}

void check() {
#ifdef LIMIT
  Serial.println("LIMIT is defined!");
#endif

#ifndef LIMIT
  Serial.println("LIMIT is not defined!");
#endif
}

void loop() {
  // put your main code here, to run repeatedly:
}
