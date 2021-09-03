uint32_t randNumber;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function
  randomSeed(analogRead(A0));
}
void loop() {
  // put your main code here, to run repeatedly:
  randNumber = random(300);
  Serial.println(randNumber);
  // print a random number from 10 to 19
  randNumber = random(10, 20);
  Serial.println(randNumber);
  delay(1000);
}
