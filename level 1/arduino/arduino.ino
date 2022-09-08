int i=0;
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  

}

void loop() {
  for(i=0;i<=7;i++)
  {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
    digitalWrite(10, LOW);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
  }
  }


