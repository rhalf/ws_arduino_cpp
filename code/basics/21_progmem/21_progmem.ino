const char a[] PROGMEM = "string1"; // "String 0" etc are strings to store - change to suit.
const char b[] PROGMEM = "string2";
const char c[] PROGMEM = "string3";
const char d[] PROGMEM = "string4";
// Then set up a table to refer to your strings.
const char * const table[] PROGMEM = 
{a, b, c, d};

char buffer[30];  
// make sure this is large enough for the largest string it must hold
void setup() {
  Serial.begin(9600);
  Serial.println(F("OK"));
}
void loop() {
  /* Using the string table in program memory requires the use of 
     special functions to retrieve the data.
     The strcpy_P function copies a string from program space to a 
     string in RAM ("buffer").
     Make sure your receiving string in RAM is large enough to 
     hold whatever
     you are retrieving from program space. */
  for (int i = 0; i < 4; i++) {
    strcpy_P(buffer, (char *) pgm_read_word(&(table[i])));  
    // Necessary casts and dereferencing, just copy.
    Serial.println(buffer);
    delay(500);
  }
}

