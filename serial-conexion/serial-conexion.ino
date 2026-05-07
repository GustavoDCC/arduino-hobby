void setup() {
  Serial.begin(9600);
  Serial.println("A0 empty readings:");
}

void loop() {
  int raw = analogRead(A0);  // Empty pin!
  float voltage = raw * (5.0 / 1023.0);
  
  Serial.print("A0 raw: ");
  Serial.print(raw);
  Serial.print(" (");
  Serial.print(voltage, 2);
  Serial.println("V)");
  
  delay(250);
}
