int takt = 0;
int lastTakt = -1;

unsigned long lastBlink = 0;
bool ledState = false;

const int buttonPin = 11;
bool lastButton = HIGH;

void setup() {
  pinMode(10, OUTPUT);

  for (int i = 2; i < 13; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  bool button = digitalRead(buttonPin);

  if (button == LOW && lastButton == HIGH) {
    if (takt == 0) takt = 1;
    else if (takt == 1) takt = 2;
    else if (takt == 2) takt = 4;
    else if (takt == 4) takt = 8;
    else if (takt == 8) takt = 16;   // G
    else takt = 0;

    delay(200);
  }

  lastButton = button;

  if (takt > 0 && millis() - lastBlink >= 1000 / takt) {
    lastBlink = millis();
    ledState = !ledState;
    digitalWrite(10, ledState);
  }

  if (takt != lastTakt) {
    lastTakt = takt;

    for (int i = 2; i <= 9; i++) {
      digitalWrite(i, HIGH);
    }

    // 0
    if (takt == 0) {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(12, HIGH);
    }
    // 1
    else if (takt == 1) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(12, HIGH);
    }
    // 2
    else if (takt == 2) {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(12, HIGH);
    }
    // 4
    else if (takt == 4) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(12, HIGH);
    }
    // 8
    else if (takt == 8) {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(12, HIGH);
    }
    // G
    else if (takt == 16) {
      digitalWrite(2, LOW);   // A
      digitalWrite(3, HIGH);  // B
      digitalWrite(4, LOW);   // C
      digitalWrite(5, LOW);   // D
      digitalWrite(6, LOW);   // E
      digitalWrite(7, LOW);   // F
      digitalWrite(8, LOW);   // G
      digitalWrite(12, LOW);   // 1

    }
  }
}
