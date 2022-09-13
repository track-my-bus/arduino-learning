void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}
int count = 8;
bool val = true;
void loop() {
if(count==12) {
  count = 8 ;
  val = !val;
  }
  
  else{ 
    count++;

  }
  if(val){
digitalWrite(count, HIGH);

delay(100);
  }
  else{
digitalWrite(count, LOW);
delay(100);
  }
  
  // put your main code here, to run repeatedly:

}
