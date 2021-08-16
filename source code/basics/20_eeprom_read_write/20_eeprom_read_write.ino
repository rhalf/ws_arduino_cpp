#include <EEPROM.h>
//An EEPROM write takes 3.3 ms to complete. 
//The EEPROM memory has a specified life of 100,000 write/erase cycles, 
//so using this function instead of write() 
//can save cycles if the written data does not change often
uint8_t data;
  
void setup(){
  Serial.begin(9600);
  
  for (int i = 0; i < 4; i++)
    EEPROM.write(i, i);

  for (int i = 0; i < 4; i++) {
    uint8_t data = EEPROM.read(i);
     Serial.print(data);   
     Serial.print(",");
  }
}

void loop(){
}
