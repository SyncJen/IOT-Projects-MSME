int led =11;
int sensor =2;
int state =LOW;
int value =0;
void setup(){
  pinMode (led,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}
void loop(){
  value =digitalRead(sensor);
  if(value==HIGH){
    digitalWrite(led,HIGH);
    delay(500);
    if(state==LOW){
    Serial.println("motion detected");
    state = HIGH;
    }
  }
  else{
    digitalWrite(led,LOW);
    delay(500);
    if(state == HIGH){
      Serial.println("motion stopped");
     state = LOW;
    }
  }

}
  