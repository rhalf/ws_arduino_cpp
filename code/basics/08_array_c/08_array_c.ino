uint8_t *p1 = malloc(4*sizeof(uint8_t));  // allocates enough for an array of 4 int
uint8_t *p2 = malloc(sizeof(uint8_t[4])); // same, naming the type directly
uint8_t *p3 = malloc(4*sizeof *p3);   // same, without repeating the type name
       // same, without repeating the type name

void print(uint8_t n[], uint8_t size) {
  for (uint8_t i = 0; i < size; i++)
    Serial.print(n[i]);
  Serial.println();
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  print(p1, 4);
  print(p2, 1);
  print(p3, 4);

  free(p1);
  free(p2);
  free(p3);
}
void loop() {}