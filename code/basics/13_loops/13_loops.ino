void setup() {
  Serial.begin(9600);
  //#############################while loop
  Serial.println("while loop");
  uint8_t count = 0;
  while (count < 10) {
    Serial.println(count);
    count++;
  }
  //#############################for loop
  Serial.println("for loop");
  for (uint8_t count = 0; count < 10; count++) 
    Serial.println(count);
  //#############################do while loop
  Serial.println("do while loop");
  count = 0;
  do {
    Serial.println(count);
    count++;
  } while (count < 10);
}

void loop() {}
