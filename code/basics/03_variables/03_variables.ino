//single assignment
int a = 5;
char b = 'b';
bool c = false;
//multiple assignment
int d = 3, e = 4;
char f = 'a', g = 'b';
bool h = false, i = true;

void setup() {
  Serial.begin(9600);
  Serial.println(a);  
  Serial.println(b);  
  Serial.println(c);
  String x = String(d) + "," + String(e);
  Serial.println(x);
  String y = String(f) + "," + String(g);
  Serial.println(y);
  String z = String(h) + "," + String(i);
  Serial.println(z);
}

void loop() {}
