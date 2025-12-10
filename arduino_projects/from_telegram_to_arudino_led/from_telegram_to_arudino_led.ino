#define led_on 1
#define led_off 2
#define led_sos 3

int x = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    x = Serial.readString().toInt();

    if(x == led_on) {
      digitalWrite(LED_BUILTIN, HIGH); 
    }

    if(x == led_off) {
      digitalWrite(LED_BUILTIN, LOW); 
    }

    if(x == led_sos) {
      // SOS (... --- ...)
      
      // три короткі
      for(int i = 0; i < 3; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(150);
        digitalWrite(LED_BUILTIN, LOW);
        delay(150);
      }

      // три довгі
      for(int i = 0; i < 3; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(400);
        digitalWrite(LED_BUILTIN, LOW);
        delay(150);
      }

      // три короткі
      for(int i = 0; i < 3; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(150);
        digitalWrite(LED_BUILTIN, LOW);
        delay(150);
      }
    }
  }
}
