void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  static uint8_t number = 0;
  number++;
  Serial.println(number);
  delay(100);
}
