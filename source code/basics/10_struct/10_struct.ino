struct Person {
  char name [10];
  uint8_t age;
  bool gender;
};

void setup() {
  Serial.begin(9600);

  Person person = {"lucky", 27, true};

  Serial.print("name:");
  Serial.println(person.name);
  Serial.print("age:");
  Serial.println(person.age);
  Serial.print("isMale:");
  Serial.println(person.gender);
}

void loop() {
}
