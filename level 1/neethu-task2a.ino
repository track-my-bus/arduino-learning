void setup() {
int i;
for(i=2;i<=5;i++)
{

pinMode(i, OUTPUT);
}

}

void loop() {
  int i=0;
  for(i=2;i<=5;i++)
  {
    digitalWrite(i, HIGH);
    delay(250);

  }
delay(750);
for(i=2;i<=5;i++)
{
  digitalWrite(i, LOW);
  delay(250);
}
delay(750);
}
