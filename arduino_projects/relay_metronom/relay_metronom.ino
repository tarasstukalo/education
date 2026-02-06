int takt = 1;
int lastTakt = -1;

unsigned long lastBlink = 0;
bool ledState = false;

void setup() {
  Serial.begin(9600);

  pinMode(10, OUTPUT);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    takt = Serial.readString().toInt();
  }

  if (takt > 0 && millis() - lastBlink >= 1000 / takt) {
    lastBlink = millis();
    ledState = !ledState;
    digitalWrite(10, ledState);
  }

  if (takt != lastTakt) {
    lastTakt = takt;

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);

if (takt == 1) {
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
}
else if (takt == 2) {
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}
else if (takt == 4) {
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}
else if (takt == 8) {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
else if (takt == 16) {
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}
    }
  }
