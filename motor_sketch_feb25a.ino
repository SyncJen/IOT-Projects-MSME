int IN1 = 8;
int IN2 = 7;
void setup()
  {
    pinMode(IN1 , OUTPUT);
    pinMode(IN2 , OUTPUT);
    Serial.begin(9600);
  }
  void loop(){
    for(int speed=0; speed<= 255; speed+=50){
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    Serial.println("backward");
    delay(2000);
    }
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    delay(5000);

  for(int speed=0; speed<= 255; speed+=50){
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    Serial.println("forward");
    delay(2000);
}

    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,HIGH);
    delay(1000);
  }