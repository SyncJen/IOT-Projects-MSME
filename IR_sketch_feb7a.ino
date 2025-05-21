int led= 13;
int IR = 9;
void setup() {
  pinMode(led ,OUTPUT);
  pinMode(IR,INPUT);
  Serial.begin(9600);
} 
void loop() {
  int digitalvalue = digitalRead(IR);
  Serial.println(digitalvalue);
  if(digitalvalue == LOW)
  {
   digitalWrite(led,HIGH);
   Serial.println("led ON"); 
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("led off");
  }
}


