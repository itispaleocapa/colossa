const int stepPin = 3; 
const int dirPin = 5; 

long val = 500;
 
void setup() {
  Serial.begin(9600);
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {
  if (Serial.available() > 0) 
  {
    val = Serial.parseInt();
    Serial.println(val);
  }
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(val); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(val); 
  }
  delay(1000); // One second delay
  
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(val);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(val);
  }
  delay(1000);
}
