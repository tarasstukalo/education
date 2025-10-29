void setup() {
  Serial.begin(9600);
}

void loop() {
for(int i = 0; i <=15; i += 1) {
  if(i == 0) 
    Serial.println("0x3f: 111111");
  else if(i == 1) 
    Serial.println("0x6: 110");
  else if(i == 2) 
    Serial.println("0x5f: 10111111");
  else if(i == 3) 
    Serial.println("0x4b: 1001011");
  else if(i == 4) 
    Serial.println("0x6b: 1100110");
  else if(i == 5) 
    Serial.println("x06d: 110110");
  else if(i == 6) 
    Serial.println("0x7d: 1111101");
  else if(i == 7) 
    Serial.println("0x7: 111");
  else if(i == 8) 
    Serial.println("0x7f: 1111111");
  else if(i == 9) 
    Serial.println("0x6f: 1101111");
  else if(i == 10) 
    Serial.println("0x77: 1110111");
  else if(i == 11) 
    Serial.println("0x7c: 1111100");
  else if(i == 12) 
    Serial.println("0x39: 1110011");
  else if(i == 13) 
    Serial.println("0xbf: 101111111");
  else if(i == 14) 
    Serial.println("0x79: 1111001");
  else if(i == 15) 
    Serial.println("0x71: 1110001");
  else
    Serial.println(i);
  delay(500);
}
}
