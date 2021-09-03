uint8_t a[3];
uint8_t b[] = { 3, 4, 5};
uint8_t c[6];

void print(uint8_t n[], uint8_t size) {
  for (uint8_t i = 0; i < size; i++)
    Serial.print(n[i]);
  Serial.println();
}

void setup() {
  Serial.begin(9600);
  Serial.println("array");
  print(a, sizeof(a));
  print(b, sizeof(b));
  print(c, sizeof(c));
  // add
  for (uint8_t i = 0; i < sizeof(a); i++) a[i] = i;
  print(a, sizeof(a));
  // merge, join
  memcpy(c, a, 3);
  memcpy(c + 3, b, 3);
  print(c, sizeof(c));
  //clear
  memset(c, 0, sizeof(c));
  print(c, sizeof(c));
}

void loop() {}
