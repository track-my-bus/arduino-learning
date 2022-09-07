int i,u=0;
void setup() {
  for(i=4;i<=11;i++)
  {
    if (i==5)
    i=6;
    else if (i==8)
    i=11;
    else 
  pinMode(i, OUTPUT);
  }
}

void loop() {
  int j;
  for(j=4;j<=11;j++)
  {
    if (j==5)
    j=6;
    if (j==8)
    j=11;
    
     if(u%2==0)
     digitalWrite(j, HIGH);
     else
     digitalWrite(j, LOW);
    
    delay(500);
  }
  u++;

}
