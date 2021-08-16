void setup() {
  // put your setup code here, to run once:    
  //American Standard Coded Information Interchange - ASCII
  Serial.begin(9600);
  for (uint8_t i = 0; i < 255; i++) {
    Serial.print("ASC:");
    Serial.write(i);
    Serial.print(",DEC:");
    Serial.print(i, DEC);
    Serial.print(",BIN:");
    Serial.print(i, BIN);
    Serial.print(",OCT:");
    Serial.print(i, OCT);
    Serial.print(",HEX:");
    Serial.print(i, HEX);
    Serial.println();
  }
}
void loop() {
  // put your main code here, to run repeatedly:    
}
