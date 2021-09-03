#include <EEPROM.h>
uint8_t data;
void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 4; i++)
    EEPROM.put(i, i);

  for (int i = 0; i < 4; i++) {
    uint8_t data = 0;
    EEPROM.get(i, data);
    Serial.print(data);
    Serial.print(",");
  }
}

void loop() {}
