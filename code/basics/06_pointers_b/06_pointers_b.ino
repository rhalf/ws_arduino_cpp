int a = 143;
int b = 14344;
int * c = &a;
int * d = &b;
int ** e = &c;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.print("a:");
  Serial.println(a);
  Serial.print("b:");
  Serial.println(b);

  Serial.print("&a:");
  Serial.println((int)c);
  Serial.print("&b:");
  Serial.println((int)d);
  
  Serial.print("e:");
  Serial.println((int)e);
  int f = &**e;
  Serial.print("&**e:");
  Serial.println((int)f);
  int g = &*e;
  Serial.print("&*e:");
  Serial.println((int)g);

  **e = 555;
  Serial.print("a:");
  Serial.println(a);

  
}

void loop() {
  // put your main code here, to run repeatedly:
}
