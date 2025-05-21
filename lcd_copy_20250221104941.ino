//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int watersensor = A0;
int waterlevel;

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  pinMode(watersensor , INPUT);
  Serial.begin(9600);
}


void loop()
{
 int waterlevel= analogRead(watersensor);
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("water level");
 lcd.print(waterlevel);
 delay(1000);

 Serial.println("water level:");
 Serial.println(waterlevel);
}