char a  = 'a'; // 8bits
char b[6] = {"hello world1"};
char c[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '1', '\0'};
char * d = {"hello world2"};
String e = "hello world3";
void setup() {
  Serial.begin(9600);
  Serial.println(a);
  Serial.println(b);
  Serial.println(b[1]);
  Serial.println(c);
  Serial.println(d);
  Serial.println(e);

  Serial.println(e + " and hi to you");
  Serial.println(e.substring(6, e.length() - 1));
  e.toUpperCase();
  Serial.println(e);
  Serial.println(e.charAt(6));
}
void loop() {}
