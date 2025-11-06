void setup () {
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (8, OUTPUT);
pinMode (7, OUTPUT);
}
void loop () {
digitalWrite (13, HIGH);
delay (250);
digitalWrite (13, LOW);
digitalWrite (12, HIGH);
delay (250);
digitalWrite (12, LOW);
digitalWrite (8, HIGH);
delay (250);
digitalWrite (8, LOW);
digitalWrite (7, HIGH);
delay (250);
digitalWrite (7, LOW);
}