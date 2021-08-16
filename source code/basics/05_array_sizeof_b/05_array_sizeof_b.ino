uint8_t n2DA[3][3];
uint8_t n2DB[3][3] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8},
};
void print2D(uint8_t n[3][3], uint8_t size1, uint8_t size2) {
  for (uint8_t i = 0; i < size1; i++) {
    for (uint8_t j = 0; j < size2; j++) {
      Serial.print(n[i][j]);
      Serial.print(",");
    }
    Serial.println();
  }
  Serial.println();
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("array 2d");
  print2D(n2DA, 3, 3);
  print2D(n2DB, 3, 3);
  Serial.print(n2DB[2][2]);
}
void loop() {
  // put your main code here, to run repeatedly:
}
