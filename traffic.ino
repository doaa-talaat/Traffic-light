void setup() { 
  pinMode(1,HIGH); 
  pinMode(5,HIGH); 
  pinMode(11,HIGH); 
 
} 
 
void loop() { 
  digitalWrite(11,HIGH); 
  delay(1000); 
  digitalWrite(11,LOW); 
  delay(50); 
  digitalWrite(5,HIGH); 
  delay(1000); 
  digitalWrite(5,LOW); 
  delay(50); 
  digitalWrite(1,HIGH); 
  delay(1000); 
  digitalWrite(1,LOW); 
  delay(50);
}