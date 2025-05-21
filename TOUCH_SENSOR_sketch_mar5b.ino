pinMode(sensor,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600); 
}

void loop() {
   int sensorvalue = digitalRead(sensor);
   if(sensorvalue == HIGH){
    //static int count =0 ;
     //while(count<5){
      digitalWrite(led,HIGH);
      //digitalWrite(led,LOW);
      Serial.println("TOUCH ACCESSED");
      //while(true);
      //delay(100000);
     //}  
}
 else {
  digitalWrite(led,LOW);
  Serial.println("TOUCH NOT ACCESSED");
 }
}
