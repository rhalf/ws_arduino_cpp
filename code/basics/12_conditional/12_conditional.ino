uint8_t a = 1, b = 2;
void setup() {
  Serial.begin(9600);
  //if statement
  if (true) Serial.println("condition is true");
  //if, else statement
  if (a == b) 
    Serial.println("a is equal to b");
  else 
    Serial.println("a is not equal to b");
  //if, else if, else statement
  if (a == b) {
    Serial.println("a is equal to b");
  } else if (a > b) {
    Serial.println("a is greater than b");
  } else if (a < b) {
    Serial.println("a is less than b");
  } else {
    Serial.println("default result");
  }
  //multiple condition
  if (a == 1 || a == 2) Serial.println("a is equal to 1 or 2");
  else Serial.println("a must equal to 1 or 2");
  
  if (a == 1 && a == 2) Serial.println("a is equal to 1 and 2");
  else Serial.println("a must equal to 1 and 2");
  //switch
  switch (a) {
    case 0:
      Serial.println("a is equal to zero");
      break;
    case 1:
      Serial.println("a is equal to one");
      break;
    default:
      Serial.println("a is unknown");
  }
}
void loop() {}
