void setup() {
  Serial.begin(9600);
  Serial.println("while loop");
  uint8_t count = 0;
  while (count < 10) {
    Serial.println(count);
    count++;
  }

  Serial.println("for loop");
  for (uint8_t count = 0; count < 10; count++) 
    Serial.println(count);

  Serial.println("do while loop");
  count = 0;
  do {
    Serial.println(count);
    count++;
  } while (count < 10);
}

void loop() {}
