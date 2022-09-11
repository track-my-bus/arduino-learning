void setup(){

  

}

void loop() {

for(int i=10;i<=13;i++) 

{

digitalWrite(i, HIGH);

delay(500);

}

delay(1000);

for(int i=10;i<=13;i++)

{

digitalWrite(i, LOW);

delay(500);

}

delay(500);

}
