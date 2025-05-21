int sensor = 7;
int led = 13;
int c;
void setup() {
pinMode(sensor,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600); 
}

void loop() {
   int sensorvalue = digitalRead(sensor);
   // this "if" for detecting
   if(sensorvalue == HIGH){
   /* c++;
    Serial.println(c);
    delay(2000);
   }
if (c==5)
{
  c=0;
}*/
      if (c==5)
{
  c=0;
}
  
    Serial.println(c);
    delay(1000);
    digitalWrite(led,HIGH);
    Serial.println("LED ON");
    Serial.println("TOUCH ACCESSED");
    delay(1000);
    digitalWrite(led,LOW);
    }
  }   
       else{
        digitalWrite(led,LOW);
        Serial.println("LED OFF");
        Serial.println("TOUCH NOT ACCESSED");
       }    
}
