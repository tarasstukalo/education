const int blink_delay = 250;

void setup () {
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (11, OUTPUT);
pinMode (10, OUTPUT);
}

void loop () {
for(int i = 10; i <= 13+1; i+=1) {
  digitalWrite (i, HIGH);
  delay (blink_delay);
  digitalWrite (i, LOW);
}
}