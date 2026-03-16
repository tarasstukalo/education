#include <Servo.h>

Servo myServo;
int x = 0;
int servoPin = 8;

void setup() {
  Serial.begin(9600); 
  myServo.attach(servoPin);
}

void loop() {
  if (Serial.available()) {
    x = Serial.readString().toInt();
      myServo.write(x);
      delay(20);
    }
  }
