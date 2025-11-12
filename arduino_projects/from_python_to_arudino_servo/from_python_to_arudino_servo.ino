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

    if (x == 0) {
      myServo.write(0);
      delay(20);
    } else if (x == 90) {
      myServo.write(90);
      delay(20);
    } else if (x == 180) {
      myServo.write(180);
      delay(20);
    }
  }
}
