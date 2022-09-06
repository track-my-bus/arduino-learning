
int led1 = 0;
int led2 = 1;
int led3 = 2;
int led4 = 3;


// the setup routine runs once when you press reset:
void setup() {                
 
  pinMode(led1, OUTPUT);   
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);    
  pinMode(led4, OUTPUT);
 
}
//looping without for loop

void loop() {
  digitalWrite(led1, HIGH);   
  delay(250);      
  digitalWrite(led2,HIGH);
  delay(250);              
  digitalWrite(led3,HIGH);
  delay(250);              
  digitalWrite(led4,HIGH);
  
  //turning on set
  delay(750);  //lag between section


  digitalWrite(led1, LOW);
  delay(250);                      
  digitalWrite(led2, LOW);     
  delay(250);                     
  digitalWrite(led3, LOW);   
  delay(250);                     
  digitalWrite(led4, LOW);      
//turning on part
  
   delay(750);   // next loop lag
}
