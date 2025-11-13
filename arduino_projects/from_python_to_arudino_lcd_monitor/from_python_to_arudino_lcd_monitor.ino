#include <Wire.h>
#include <LiquidCrystal_I2C.h>

String input = "";
int number = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);
#define BACKLIGHT_PIN 13

void setup() {
  Serial.begin(9600);

  pinMode(BACKLIGHT_PIN, OUTPUT);
  digitalWrite(BACKLIGHT_PIN, HIGH);

  lcd.begin();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  lcd.print("Waiting...");
}

void loop() {
  if (Serial.available()) {
    input = Serial.readString();
    input.trim();  // прибирає \n і пробіли

    bool isNumber = true;
    for (unsigned int i = 0; i < input.length(); i++) {
      if (!isDigit(input[i])) {
        isNumber = false;
        break;
      }
    }

    lcd.clear();
    lcd.setCursor(0, 0);

    if (isNumber) {
      number = input.toInt();
      lcd.print("Number: ");
      lcd.setCursor(0, 1);
      lcd.print(number);
      Serial.println("Received number");
    } else {
      lcd.print("Text:");
      lcd.setCursor(0, 1);
      lcd.print(input);
      Serial.println("Received text");
    }
  }
}
