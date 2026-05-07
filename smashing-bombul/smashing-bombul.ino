void setup() {
  Serial.begin(9600);
  Serial.println("Smashing Bombul");
  for (int led = 12; led <= 13; led++) {
    pinMode(led, OUTPUT);
  }
}
void loop() {
  for (int led = 12; led <= 13; led++) {
    Serial.println("LED: " + String(led));
    digitalWrite(led, HIGH);
    delay(2000);
    digitalWrite(led, LOW);
    delay(2000);
  }
}
