void setup() {
  Serial.begin(9600);  
}

void loop() {
  const uint8_t A = 0;
  // A++; not possible
  Serial.println(A);

  static uint8_t b = 0;
  b++;
  Serial.println(b);

  volatile uint8_t c = 0;
  c++;
  Serial.println(b);

  delay(1000);
}
