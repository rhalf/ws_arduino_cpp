uint8_t nA[] = { 0, 9, 1, 7 };
uint8_t nB[4] = { 5, 5, 7, 7 };
uint8_t nC[5] = { 9, 7, 9 };
uint8_t nD[5];

void print(uint8_t n[], uint8_t size) {
  for (uint8_t i = 0; i < size; i++)
    Serial.print(n[i]);
  Serial.println();
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("array");
  print(nA, sizeof(nA));
  print(nB, sizeof(nB));
  print(nC, sizeof(nC));
  print(nD, sizeof(nD));
}

void loop() {
  // put your main code here, to run repeatedly:
}
