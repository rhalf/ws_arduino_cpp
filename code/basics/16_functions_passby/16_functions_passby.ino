uint8_t number = 123;

void setup() {
  Serial.begin(9600);
  byValue(number);
  Serial.println(number);
  byRef(number);
  Serial.println(number);
}

void byValue(uint8_t num) {
  num++;
}

void byRef(uint8_t &num) {
  num+= 5;
}

void loop() {}
