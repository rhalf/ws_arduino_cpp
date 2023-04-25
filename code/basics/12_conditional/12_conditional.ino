uint8_t a = 1, b = 2;
void setup() {
  Serial.begin(9600);

  int8_t a = -1, b = 5;
  Serial.println(a);
  //if statement
  if (a < b) {
    Serial.println("a is less than b");

    if (a < 0) {
      Serial.println("a is negative");
    }

  } else if (a > b) {
    Serial.println("a is greater than b");
  } else if (a == b) {
    Serial.println("a is equals b");
  } else {
  }
}
void loop() {}
