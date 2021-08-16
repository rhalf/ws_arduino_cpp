void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  function1();
  function2(143);
  uint8_t result = function3();
  Serial.println(result);
}

void function1() {
  Serial.println("function1");
}

void function2(uint8_t i) {
  Serial.print("function2, ");
  Serial.print("parameter : ");
  Serial.println(i);
}

uint8_t function3() {
  Serial.print("function3, return ");
  return 128;
}


void loop() {
  // put your main code here, to run repeatedly:
}
