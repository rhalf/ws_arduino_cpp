uint8_t a = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //if statement
  if (a == 1) {
    Serial.println("a is equal to one");
  }
  //if, else statement
  if (a == 1) {
    Serial.println("a is equal to one");
  } else {
    Serial.println("a is not equal to one");
  }
  //if, else if, else statement
  if (a == 1) {
    Serial.println("a is equal to one");
  } else if (a == 2) {
    Serial.println("a is equal to 2");
  } else {
    Serial.println("a is unknown");
  }
  
  //if, else if, else statement one line
  if (a == 1) Serial.println("a is equal to one");
  else if (a == 2) Serial.println("a is equal to 2");
  else Serial.println("a is unknown");
  
  //logical or if
  if (a == 1 || a == 2) Serial.println("a is 2 or one");
  else Serial.println("a is not equal to one");
  //logical and if
  if (a == 1 && a == 2) Serial.println("a is 2 or one");
  else Serial.println("a is not equal to one");
  
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

void loop() {
  // put your main code here, to run repeatedly:
}
