int potPin1 = A0;
int potPin2 = A1;
int potPin3 = A2;
int redLedPin = 3;
int greenLedPin = 5;
int blueLedPin = 6;

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop() {
  int brightnessRed = analogRead(potPin1) / 4;
  analogWrite(redLedPin, brightnessRed);
  int brightnessGreen = analogRead(potPin2) / 4;
  analogWrite(greenLedPin, brightnessGreen);
  int brightnessBlue = analogRead(potPin3) / 4;
  analogWrite(blueLedPin, brightnessBlue);
}