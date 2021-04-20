int relayPin = 7;

void setup() {
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Activate "NO" and deactivate "NC"
  digitalWrite(relayPin, LOW);
  delay(700);
  digitalWrite(relayPin, HIGH);
  // Activate "NC" and deactivate "NO"
  delay(700);
}
