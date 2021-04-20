int gasSensor = 7;

void setup() {
  pinMode(gasSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = digitalRead(gasSensor);
  Serial.println(gasValue);

  delay(2000);
}
