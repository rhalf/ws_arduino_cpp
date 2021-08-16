typedef void (*Callback1)(void);
typedef void (*Callback2)(uint8_t i);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  function1(print); 
  function2(print);
}

void print() {
  Serial.println("print");
}

void print(uint8_t i) {
  Serial.print("print parameter : ");
  Serial.println(i);
}

void function1(Callback1 callback1) {
  callback1();
}

void function2(Callback2 callback2) {
  callback2(143);
}

void loop() {
  // put your main code here, to run repeatedly:
}
