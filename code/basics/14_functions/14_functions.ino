void setup() {
  Serial.begin(9600);
  f1();
  f2(143);
  Serial.println(f3());
}

void f1() { // function
  Serial.println("f1");
}

void f2(uint8_t i) { // function with parameter
  Serial.print("f2, parameter : ");
  Serial.println(i);
}

uint8_t f3() { // function with return value
  Serial.print("f3, return ");
  return 128;
}
void loop() {}
