const int pinX = A0;
const int pinY = A1;
const int pinButton = 2;

void setup() {

  Serial.begin(9600);

  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(pinButton, INPUT_PULLUP);

}

void loop() {

  int XValue = analogRead(pinX);
  int YValue = analogRead(pinY);

  Serial.print(XValue);
  Serial.print("\t");
  Serial.print(YValue);
  Serial.print("\t");

  if (!digitalRead(pinButton))
  {
    Serial.print("Кнопка нажата!");
  } else {
    Serial.print("Кнопка не нажата!");
  }

  Serial.print("\n");

}
