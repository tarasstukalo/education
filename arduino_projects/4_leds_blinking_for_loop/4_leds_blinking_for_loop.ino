const int blink_delay = 250;

void setup () {
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (8, OUTPUT);
pinMode (7, OUTPUT);
}

void loop () {
digitalWrite (13, HIGH);
delay (blink_delay);
digitalWrite (13, LOW);
digitalWrite (12, HIGH);
delay (blink_delay);
digitalWrite (12, LOW);
digitalWrite (8, HIGH);
delay (blink_delay);
digitalWrite (8, LOW);
digitalWrite (7, HIGH);
delay (blink_delay);
digitalWrite (7, LOW);
}