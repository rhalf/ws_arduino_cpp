const char string_0[] PROGMEM = "String 0"; // "String 0" etc are strings to store - change to suit.
const char string_1[] PROGMEM = "String 1";
const char string_2[] PROGMEM = "String 2";
const char string_3[] PROGMEM = "String 3";


// Then set up a table to refer to your strings.
const char *const string_table[] PROGMEM = {string_0, string_1, string_2, string_3};

char buffer[30];  // make sure this is large enough for the largest string it must hold

void setup() {
  Serial.begin(9600);
  Serial.println(F("OK"));
}


void loop() {
  /* Using the string table in program memory requires the use of special functions to retrieve the data.
     The strcpy_P function copies a string from program space to a string in RAM ("buffer").
     Make sure your receiving string in RAM  is large enough to hold whatever
     you are retrieving from program space. */

  for (int i = 0; i < 4; i++) {
    strcpy_P(buffer, (char *)pgm_read_word(&(string_table[i])));  // Necessary casts and dereferencing, just copy.
    Serial.println(buffer);
    delay(500);
  }
}
