int joypinx= A0;
int ledR = 8 ;
int ledL = 12 ;
void setup() {
  // put your setup code here, to run once:
  pinMode(joypinx , INPUT);
  pinMode(ledR , OUTPUT);
  pinMode(ledL , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int analogvalue = analogRead(joypinx);
 Serial.println("Analog value:");
 Serial.println(analogvalue);
delay(500);

if(analogvalue == 0)
{ 
   digitalWrite(ledR , HIGH);
   digitalWrite(ledL, LOW);
   Serial.println(" LED 1 ON");
}
else if(analogvalue == 1023)
{
   digitalWrite(ledR , LOW);
   digitalWrite(ledL, HIGH);
   Serial.println(" LED 2 ON");
}
else 
{
   digitalWrite(ledR , LOW);
   digitalWrite(ledL, LOW);
   Serial.println(" LED OFF");
}
delay(500);
}

 
 
 
 
 
 
 
 
 
 
 
 
 /*int xdir = map(analogvalue , 0, 1023 , -100 , 100);
 int ydir = map(analogvalue , 0, 1023 , -100 , 100);
  
  if(xdir ==0 || ydir == 0)
  {
    Serial.println("MOVEMENT  DETECTED");
    Serial.println("analogvalue");
    Serial.println(analogvalue);
  } 
  else
  { 
    Serial.println("MOVEMENT NOT DETECTED");
    Serial.println("analogvalue");
    Serial.println(analogvalue);
  } 
  delay(1000);
}*/
