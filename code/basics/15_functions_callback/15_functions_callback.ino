typedef void (*Cb1)(void);
typedef void (*Cb2)(uint8_t i);

void setup() {
  Serial.begin(9600);
  f1(print); 
  f2(print);
}
void print() {
  Serial.println("print");
}
void print(uint8_t i) {
  Serial.println("print w/ param: " + String(i));
}
void f1(Cb1 cb1) {
  cb1();
}
void f2(Cb2 cb2) {
  cb2(143);
}
void loop() {}
