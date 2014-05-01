void setup () {
  const int motor1 = 13;
  const int motor2 = 14;
  pinMode(motor1, OUTPUT);
  pinMOde(motor2, OUTPUT);
}

void loop () {
  digitalWrite(motor1, HIGH);
  delay(1000);
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, HIGH);
  delay(1000);
  digitalWrite(motor2, LOW);
}
