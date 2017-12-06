const int stepPin = 3; 
const int dirPin = 5; 

long val = 500;
 
void setup() {
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {  
  digitalWrite(dirPin,LOW);
  for(int x = 0; x < 25000; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(val); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(val); 
  }  
  digitalWrite(dirPin,HIGH); 
  for(int x = 0; x < 25000; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(val); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(val); 
  }    
}
