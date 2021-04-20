int led = 7;

char data = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read();

    Serial.print(data);
    Serial.print("\n");

    if (data == '1') {
      digitalWrite(led, HIGH);
    } else if (data == '2') {
      digitalWrite(led, LOW);
    }
  }
}
