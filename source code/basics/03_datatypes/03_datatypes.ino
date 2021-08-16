byte a = 127; // 8bit
word b = 65535; // 16bits
int c = 32767; // 16bits
short d = 32767; // 16bits
int e = 32767; // 16bits
long f = 2147483647; // 32bits
unsigned int g = 65535; // 16bits
//as large as 3.4028235E+38 and as low as -3.4028235E+38
float h = 99.7;  //32 bits
double i =  3.14159265359; //32 bits
bool x = true;
bool y = false; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("byte : " + String(a));
  Serial.println("word : " + String(b));
  Serial.println("int : " + String(c));
  Serial.println("short : " + String(d));
  Serial.println("int : " + String(e));
  Serial.println("long : " + String(f));
  Serial.println("unsigned int : " + String(g));
  Serial.println("float : " + String(h));  
  Serial.println("double : " + String(i));
  Serial.println("boolean x true: " + String(x));
  Serial.println("boolean y false: " + String(y));
}

void loop() {
  // put your main code here, to run repeatedly:
}
