int analogpin = A0;

void setup() {
  // put your setup code here, to run once:
 pinMode(analogpin , INPUT);
 Serial.begin(9600);
}

void loop() {
int analogvalue = analogRead(analogpin);
Serial.println("analog value");
Serial.println(analogvalue);

int threshold = 700;

if( analogvalue > threshold )
{
  Serial.println("Soil is dry");
}

else
{
  Serial.println(" Soil is moist");
}

delay(1000);
}
