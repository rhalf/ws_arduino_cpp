void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()) {
    String input;
    while (Serial.available()) {
     input += (char)Serial.read();
    }
    Serial.print(input);
  }
}
