int8_t a = 1, b = 5, c = 9;
void setup() {
  Serial.begin(9600);
  Serial.println("========arithmetic========");
  Serial.println(a + b + c);              // add 15
  Serial.println(a - b - c);              // sub -13
  Serial.println(a * b * c);              // mul 45
  Serial.println((float)c / b);           // div 1.8
  Serial.println(c / b);                  // flr 1
  Serial.println(c % b);                  // mod 4
  Serial.println(pow(b, c));              // exp 1953125
  Serial.println(max(b, c));              // max 9
  Serial.println(min(b, c));              // min 5
  Serial.println(constrain(b, a, c));     // min 5
  Serial.println(sqrt(pow(b, 3)));        // sq 11.18
  Serial.println(abs(-5));                // abs 5

  Serial.println("========comparison=======");
  Serial.println(c == b);                 // is equal? 0
  Serial.println(c != b);                 // is not equal? 1
  Serial.println(c < b);                  // is less than? 0
  Serial.println(c > b);                  // is greater than? 1
  Serial.println(c <= b);                 // is less than or equal? 0
  Serial.println(c >= b);                 // is greater than or equal? 1

  Serial.println("=========bitwise========");
  Serial.println( a | b, BIN);            // or ? 101
  Serial.println( a & b, BIN);            // and ? 1
  Serial.println( a ^ b, BIN);            // xor ? 100
  Serial.println((uint8_t)~a, BIN);       // comp ? 11111110
  Serial.println( a >> 1, BIN);           // right shift 0
  Serial.println( a << 1, BIN);           // left shift 10

  Serial.println("=========logical========");
  Serial.println(true || false);          // logical or 1
  Serial.println(true && false);          // logical and 0
  Serial.println(!true);                  // logical not 0
}

void loop() {}
