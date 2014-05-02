int left = 9;
int right = 10;
int torso = 11;

void setup () {
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(torso, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  //debug
  Serial.println("Values:");
  Serial.println(left);
  Serial.println(right);
  Serial.println(torso);
  
  //wait 5 seconds after being turned on
  Serial.println("Waiting...");
  delay(5000);
  //move left wheel then right wheel 
  for (int i = 0; i < 12; i++) {
    Serial.println("left");
    digitalWrite(left, HIGH);
    delay(500);
    digitalWrite(left, LOW);
    
    Serial.println("right");
    digitalWrite(right, HIGH);
    delay(500);
    digitalWrite(right, LOW);
  }
  //move forward and then rotate torso
  Serial.println("forward");
  digitalWrite(left, HIGH);
  digitalWrite(right, HIGH);
  delay(2000);
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
