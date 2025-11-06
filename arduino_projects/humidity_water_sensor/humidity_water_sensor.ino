int water = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  water = analogRead(A0);
  Serial.println(water);

  if (water > 200) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }

  delay(50);
}
