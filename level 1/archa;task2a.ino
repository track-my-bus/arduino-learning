void setup() {
  // put your setup code here, to run once:
int i=2;
for(i=2;i<=5;i++);
{
pinMode(i, OUTPUT);
}
}

void loop() {
  int i=2;
  for(i=2;i<=5;i++)
  {
  digitalWrite(i, HIGH);
  delay(1000);
}
delay(1000);
for(i=2;i<=5;i++)
{
digitalWrite(i, LOW);
delay(1000);
}
delay(1000);

  // put your main code here, to run repeatedly:

}
