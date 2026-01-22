int x = 0;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  if (Serial.available()) {
    x = Serial.readString().toInt();

  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  if (x == 1) {
    digitalWrite(10, HIGH); //red 001
  }
  if (x == 2) {
    digitalWrite(11, HIGH); //green 010
  }
  if (x == 3) {
    digitalWrite(9, HIGH); //blue 011
  }
  if (x == 4) {
    digitalWrite(9, HIGH); //pink 100
    digitalWrite(10, HIGH);
  }
  if (x == 5) {
    digitalWrite(10, HIGH); //yellow 101
    digitalWrite(11, HIGH);
  }
  if (x == 6) {
    digitalWrite(11, HIGH); // light blue 110
    digitalWrite(9, HIGH);
  }
    if (x == 7) {
    digitalWrite(11, HIGH); // white 111
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
  }
}
}