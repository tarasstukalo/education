#include <Servo.h>

Servo myServo;
int potPin = A0;
int servoPin = 8;
void setup() {
  myServo.attach(servoPin);
}

void loop() {
  int potValue = analogRead(potPin);
  int angle = round(potValue / 5.7);
  myServo.write(angle);
  delay(20);
}
