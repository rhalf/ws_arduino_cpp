void setup() {
  Serial.begin(9600);
}
void loop() {
  while (Serial.available()) {
    char input = Serial.read();
    Serial.println(input);
  }
}
