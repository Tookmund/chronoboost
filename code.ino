int left = 10;
int right = 11;
int torso = 9;

void setup () {
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(torso, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  //debug
  Serial.println("Waiting...");
  Serial.println("Values:");
  Serial.println(left);
  Serial.println(right);
  Serial.println(torso);
  
  //wait 5 seconds after being turned on
  delay(5000);
  //move left wheel then right wheel 
  for (int i = 0; i < 12; i++) {
    Serial.println("left");
    digitalWrite(left, HIGH);
    delay(5000);
    digitalWrite(left, LOW);
    
    Serial.println("right");
    digitalWrite(right, HIGH);
    delay(5000);
    digitalWrite(right, LOW);
  }
  //move forward and then rotate torso
  Serial.println("forward");
  digitalWrite(left, HIGH);
  digitalWrite(right, HIGH);
  delay(1000);
  digitalWrite(left, LOW);
  digitalWrite(right, LOW);
  
  Serial.println("torso");
  digitalWrite(torso, HIGH);
  delay(2000);
  digitalWrite(torso, LOW);
  
  //prevent looping
  left = 2;
  right = 2;
  torso = 2;
  Serial.println("done");
}
