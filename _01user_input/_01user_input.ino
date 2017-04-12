void setup() {
    Serial1.begin(115200);
    Serial.begin(115200);
}

void loop() {
  uint8_t userInput;
  if(Serial1.available() > 0) {
    userInput = Serial1.read();
    
    Serial.println((char)userInput);
  }
}
