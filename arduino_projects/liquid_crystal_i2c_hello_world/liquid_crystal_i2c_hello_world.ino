#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);
#define BACKLIGHT_PIN 13
void setup()
{
  pinMode(BACKLIGHT_PIN, OUTPUT);
  digitalWrite(BACKLIGHT_PIN, HIGH);
	// initialize the LCD
	lcd.begin();

	lcd.home ();
  delay(250); 
  lcd.setCursor(0, 0);
  lcd.print("H");
  delay(250); 
  lcd.setCursor(2, 0);
  lcd.print("e");
  delay(250); 
  lcd.setCursor(4, 0);
  lcd.print("l");
  delay(250); 
  lcd.setCursor(6, 0);
  lcd.print("l");
  delay(250); 
  lcd.setCursor(8, 0);
  lcd.print("o");
  delay(1000); 
  lcd.setCursor(0, 1);
  lcd.print("W");
  delay(250); 
  lcd.setCursor(2, 1);
  lcd.print("o");
  delay(250); 
  lcd.setCursor(4, 1);
  lcd.print("r");
  delay(250); 
  lcd.setCursor(6, 1);
  lcd.print("l");
  delay(250); 
  lcd.setCursor(8, 1);
  lcd.print("d");
  delay(250); 
  lcd.setCursor(10, 1);
  lcd.print("!");
}

void loop()
{
	
}