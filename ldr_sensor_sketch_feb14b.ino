int sensor = A0;
void setup(){
  Serial.begin(9600);
}
void loop ()
{
 int sensorvalue = analogRead (sensor);
 float waterlevel = (sensorvalue / 1023.0)*100;
 Serial.println("waterlevel");
 Serial.println(waterlevel);
 delay(500);
}