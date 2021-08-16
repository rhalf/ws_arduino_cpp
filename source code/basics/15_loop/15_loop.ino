void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for (uint8_t count = 0; count < 10; count++) {
    Serial.println(count);
  }

  uint8_t count = 0;
  while (count < 10) {
    Serial.println(count);
    count++;
  }

  count = 0;
  do {
    Serial.println(count);
    count++;
  } while (count < 10);
}
void loop() {
  // put your main code here, to run repeatedly:
}
