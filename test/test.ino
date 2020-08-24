#define PIN2 2

int val = 0;
void setup() {
  Serial.begin(115200);
  Serial.println("ADT6401 Breakout Test");
  pinMode(PIN2, INPUT);
}

void loop() {
  val = digitalRead(PIN2);
  if (val == false){
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("ALARM!");
  } else {
    digitalWrite(LED_BUILTIN, LOW); 
  }
}
