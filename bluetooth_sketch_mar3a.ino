int led = 11;
int Data;
void setup() {
 pinMode(led, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  while(Serial.available() > 0)
  Data = Serial.read();
  Serial.println(Data);
  if (Data == '1')
  {
   digitalWrite(led, HIGH);
  }
  if (Data == '0')
  {
   digitalWrite(led, LOW);
  }
}
