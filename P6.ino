int ENA = 3;
int IN1 = 2;
int IN2 = 4;
int tilt = 7;

void setup() {
  analogWrite(ENA,128);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(tilt,INPUT_PULLUP);
}
void loop() {
  if (digitalRead(tilt) == LOW) {
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW); 
  }
  else {
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW); 
  }
}