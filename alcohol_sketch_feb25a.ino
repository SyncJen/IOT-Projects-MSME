int alcoholpin = A0;
void setup() {
  // put your setup code here, to run once:
 pinMode( alcoholpin , INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int alcoholvalue = analogRead(alcoholpin);
Serial.println("alcohol value");
Serial.println(alcoholvalue);

 if(alcoholvalue >600){
  digitalWrite( alcoholpin , 600);
  Serial.println("alcohol detected");
  delay(1000);
 }

 else {
  digitalWrite(alcoholpin , 0);
  Serial.println("alcohol not detected");
  delay(1000);
 }
 
 }
