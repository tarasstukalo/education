int takt = 1;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100);
  pinMode(7, OUTPUT);

}

void loop() {
  if (Serial.available()) {
    takt = Serial.readString().toInt();
  }
  
  if (takt) {
    digitalWrite(7, HIGH);
    delay(1000/takt);
    digitalWrite(7, LOW);
    delay(1000/takt);
  } 
}
