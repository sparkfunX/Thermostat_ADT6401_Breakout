#define PIN2 2

int val = 0;
void setup() {
  pinMode(PIN2, INPUT);
}

void loop() {
  Serial.begin(115200);
  val = digitalRead(PIN2);
  digitalWrite(LED_BUILTIN, !val);
  if (val == false)
    Serial.println("ALARM!");
    
}
