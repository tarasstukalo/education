int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int potPin = A7;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int val = analogRead(potPin);   // 0–1023
  int br = val / 4;               // 0–255 без map()

  // червоний
  analogWrite(redPin, br);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(500);

  // зелений
  analogWrite(redPin, 0);
  analogWrite(greenPin, br);
  analogWrite(bluePin, 0);
  delay(500);

  // синій
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, br);
  delay(500);

  // червоний + зелений
  analogWrite(redPin, br);
  analogWrite(greenPin, br);
  analogWrite(bluePin, 0);
  delay(500);

  // зелений + синій
  analogWrite(redPin, 0);
  analogWrite(greenPin, br);
  analogWrite(bluePin, br);
  delay(500);

  // синій + червоний
  analogWrite(redPin, br);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, br);
  delay(500);
}
