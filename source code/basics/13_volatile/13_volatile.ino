void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  //put your main code here, to run repeatedly:

  //Sketch uses 1672 bytes (5%) of program storage space. Maximum is 32256 bytes.
  //Global variables use 188 bytes (9%) of dynamic memory, leaving 1860 bytes for local variables. Maximum is 2048 bytes.
  //uint32_t number = 0;

  //Sketch uses 1814 bytes (5%) of program storage space. Maximum is 32256 bytes.
  //Global variables use 188 bytes (9%) of dynamic memory, leaving 1860 bytes for local variables. Maximum is 2048 bytes.
  volatile uint32_t number = 0;

  number++;
  Serial.println(number);
  delay(100);
}
