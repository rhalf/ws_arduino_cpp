enum status {
  UNKNOWN, RUNNING, IDLING, STOPPED
};

typedef enum {
  RED = 0xFF0000,
  GREEN = 0x00FF00,
  BLUE = 0x0000FF
} Color;

void setup() {
  Serial.begin(9600);
  Serial.println(UNKNOWN);
  Serial.println(RUNNING);
  Serial.println(IDLING);
  Serial.println(STOPPED);

  Color color = RED;
  Serial.println(color, HEX);
}

void loop() {}
