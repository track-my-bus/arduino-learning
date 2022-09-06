void setup() {
  // put your setup code here, to run once:
  int i = 2;
  for(i=2;i<=5;i++);{
    pinMode(i, OUTPUT);

  }
}

void loop() {
  // Repeatedly blink 4 leds:
  int i = 2;  //Initial led pin
  for(i=2;i<=5;i++){    //Leds from 2 to 5 pins
    digitalWrite(i, HIGH);    //Led high
    delay(250);   //delay
  }
  delay(1000);
  for(i=2;i<=5;i++){
    digitalWrite(i, LOW);   //Led low
    delay(250);
  }
  delay(1000);
}
