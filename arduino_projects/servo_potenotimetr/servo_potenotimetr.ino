int potPin = A0;   // А0 — вхід з потенціометра
int ledPin = 9;    // PWM вихід для керування яскравістю

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);        // читаємо значення 0–1023
  int brightness = map(potValue, 0, 1023, 0, 255); // перетворюємо на 0–255

  analogWrite(ledPin, brightness);          // встановлюємо яскравість LED
}
