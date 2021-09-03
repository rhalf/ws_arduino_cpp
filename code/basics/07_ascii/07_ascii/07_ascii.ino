void setup() {
  //American Standard Coded Information Interchange - ASCII
  Serial.begin(9600);
  Serial.print("DEC\t\tBIN\t\tOCT\t\tHEX\t\tChar");
  for (uint8_t i = 0; i < 255; i++) {
    Serial.print(i, DEC);
    Serial.print("\t\t");
    Serial.print(i, BIN);
    Serial.print("\t\t");
    Serial.print(i, OCT);
    Serial.print("\t\t");
    Serial.print(i, HEX);
    Serial.print("\t\t");
    Serial.write(i);
    Serial.println();
  }
}
void loop() {}
// escape characters
// back slash      description
//   \b              backspace
//   \s              space
//   \r              carriage return
//   \t              tab
//   \v              vertical tab
//   \n              newline
//   \e              escape
