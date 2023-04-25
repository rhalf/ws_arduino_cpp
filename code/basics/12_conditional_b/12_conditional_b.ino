uint8_t a = 1, b = 2;

void setup() {
  Serial.begin(9600);

  int8_t a = 1, b = 5, c = 0;
  Serial.println(a);
  //switch statement
  switch (a) {
    case 0:
      Serial.println("a is 0");
      break;
    case 1:
      Serial.println("a is 1");
      break;
    default:
      Serial.println("a is unknown");
  }
}
void loop() {}
