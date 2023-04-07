
void setup(){
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop(){
  if (true) {
    digitalWrite(11, HIGH);
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(11, LOW);
    digitalWrite(4, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(11, LOW);
    digitalWrite(4, LOW);
  }
}