void setup() {
  Serial.begin(9600);  
}

void loop() {
  const uint8_t A = 0;
  // A++; not possible
  Serial.println("const: " + String(A));

  // cant be reinitiazed
  static uint8_t b = 0;
  b++;
  Serial.println("static: " + String(b));

  // will be stored to ram
  volatile uint8_t c = 0;
  c++;
  Serial.println("volatile: " + String(c));
  
  delay(1000);
}
