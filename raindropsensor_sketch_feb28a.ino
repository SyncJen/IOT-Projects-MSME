int led = 13;
int rainsensorpin = A0;
int threshold = 600;
void setup() {
  // put your setup code here, to run once:
 pinMode(led , OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int rainsensorvalue = analogRead(rainsensorpin);
 Serial.println("rainsensor value");
 Serial.println(rainsensorvalue);
  
  if(rainsensorvalue >threshold)
  {
    digitalWrite(led , HIGH);
  }
  
  else{
    digitalWrite(led , LOW);
  }
  delay(1000);
  
}
