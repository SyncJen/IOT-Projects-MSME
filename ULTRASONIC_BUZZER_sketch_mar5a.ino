int trigpin= 3;
int echo = 4;
int buzzer = 8;
int timing;
int duration;
int distance;
void setup() {
 pinMode(trigpin, OUTPUT);
 pinMode(echo, INPUT);
 pinMode(buzzer , OUTPUT);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  delayMicroseconds(10);
  
  timing = pulseIn(echo, HIGH);
  duration = pulseIn(echo,HIGH);
  distance = (timing * 0.34)/2;
  Serial.println("distance");
  Serial.println(distance);
  Serial.println("cm/");
  Serial.println(distance/2.54);

  if(distance <= 100){
    tone(buzzer , 10);
  }
   else{
    noTone(buzzer);
   }
  delay(1000); 
}
