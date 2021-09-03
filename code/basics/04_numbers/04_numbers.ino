int8_t a = -127;                      // 8bits  byte
int16_t b = -32767;                   // 16bits word, int
int32_t c = -2147483647;              // 32bits long
//int64_t d = -9223372036854775807;   // 64bits 
uint8_t e = 255;                      // 8bits  byte
uint16_t f = 65535;                   // 16bits word
uint32_t g = 4294967295;              // 32bits long
//uint64_t h = 18446744073709551615;  // 64bits

float i = 1.123456789;                // 32bits float, double
bool j = true;                        // 8 bits bool
char k = 'a';                         // 8 bits char

void setup() {
  Serial.begin(9600);
  Serial.println("int8_t : " + String(a));
  Serial.println("int16_t : " + String(b));
  Serial.println("int32_t : " + String(c));
  Serial.println("uint8_t : " + String(e));
  Serial.println("uint16_t : " + String(f));
  Serial.println("uint32_t : " + String(g));

  Serial.println("float : " + String(i));
  Serial.println("bool : " + String(g));
  Serial.println("char : " + String(k));
}
void loop() {}
