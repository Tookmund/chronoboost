void setup () {
  const int left = 10;
  const int right = 11;
  const int torso = 9;
  pinMode(motor1, OUTPUT);
  pinMOde(motor2, OUTPUT);
}

void loop () {
  for (int i = 0; i < 12; i++) {
    digitalWrite(left, HIGH);
    delay(5000);
    digitalWrite(left, LOW);
    digitalWrite(right, HIGH);
    delay(5000);
    digitalWrite(right, LOW);
  }
  
  digitalWrite(left, HIGH);
  digitalWrite(right, HIGH);
  delay(1000);
  digitalWrite(left, LOW);
  digitalWrite(right, LOW);
  digitalWrite(torso, HIGH);
  delay(2000);
  digitalWrite(torso, LOW);
}
