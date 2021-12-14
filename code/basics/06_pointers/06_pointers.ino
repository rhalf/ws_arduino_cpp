uint32_t a = 143;
uint32_t b = a;
uint32_t c = &a;
uint32_t *d = c;
uint32_t e = &c;
uint32_t **f = e;

void setup() {
  Serial.begin(9600);
  Serial.print("a:");
  Serial.println(a);
  Serial.print("b:");
  Serial.println(b);
  Serial.print("c:");
  Serial.println(c);
  Serial.print("*d:");
  Serial.println(*d);
  Serial.print("e:");
  Serial.println(e);
  Serial.print("f:");
  Serial.println(**f);
  
  Serial.print("**f:");
  Serial.println(**f);
}

void loop() {}
