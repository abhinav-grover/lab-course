void setup() 
{
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() 
{
  digitalWrite(1,HIGH); 
  delay(250); 
  digitalWrite(1,LOW); delay(250);
  digitalWrite(2,HIGH); 
  delay(250); 
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(250); 
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(250); 
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(250);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH); 
  delay(250);
  digitalWrite(6,LOW);

  digitalWrite(6,HIGH); 
  delay(250); 
  digitalWrite(1,LOW);  delay(250);
  digitalWrite(5,HIGH);
  delay(250); 
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(250); 
  digitalWrite(3,LOW);
  digitalWrite(3,HIGH);
  delay(250);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  delay(250);
  digitalWrite(5,LOW);
  digitalWrite(1,HIGH); 
  delay(250); 
  digitalWrite(6,LOW);

}
