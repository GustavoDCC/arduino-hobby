const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 7;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
// Check this code on Arduino IDE and make sure it works as expected. If you have any questions or need further assistance, feel free to ask!

  // Limpia el trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Envía pulso ultrasónico
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lee el tiempo del eco
  duration = pulseIn(echoPin, HIGH);

  // Calcula distancia
  distance = duration * 0.034 / 2;

  // Muestra distancia
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Enciende LED si está cerca
  if (distance < 20) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
