
int8_t a = -127; // 8bit
int16_t b = -32767; // 16bits
int32_t c = -2147483647; // 32bits
int64_t d = -9223372036854775807; // 64bits


uint8_t e = 255; // 8bit
uint16_t f = 65535; // 16bits
uint32_t g = 4294967295; // 32bits
uint64_t h = 18446744073709551615; // 64bits


void print64i(int64_t x) {
  bool z = false;
  String y = "";
  if (x < 0) z = true;
  while ( x != 0 ) {
    y += String(uint8_t(abs(x % 10)));
    x = x / 10;
  }
  if (z) y += "-";
  for (int8_t i = y.length(); i > -1; i--) Serial.print(y[i]);
  Serial.println();
}

void print64u(uint64_t x) {
  String y = "";
  while ( x != 0 ) {
    y += String(uint8_t(abs(x % 10)));
    x = x / 10;
  }
  for (int8_t i = y.length(); i > -1; i--) Serial.print(y[i]);
  Serial.println();
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("int8_t : " + String(a));
  Serial.println("int16_t : " + String(b));
  Serial.println("int32_t : " + String(c));
  Serial.print("int64_t : ");
  print64i(d);
  Serial.println("uint8_t : " + String(e));
  Serial.println("uint16_t : " + String(f));
  Serial.println("uint32_t : " + String(g));
  Serial.print("uint64_t : ");
  print64u(h);

}

void loop() {
  // put your main code here, to run repeatedly:
}
