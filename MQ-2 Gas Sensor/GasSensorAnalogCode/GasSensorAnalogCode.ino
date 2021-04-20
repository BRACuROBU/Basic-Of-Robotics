int gasSensor = A0;
int buzzer = 7;

void setup() {
  pinMode(gasSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensor);
  Serial.println(gasValue);

  if (gasValue > 500) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(2000);
}
