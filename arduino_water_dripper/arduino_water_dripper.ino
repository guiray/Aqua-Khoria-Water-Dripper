char receivedChar;
boolean newData = false;

int valveState = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("<Arduino is ready>");
  
  pinMode(12, OUTPUT);
}

void loop() {
    readOneChar();
    updateValve();
}

void readOneChar() {
    if (Serial.available() > 0) {
        receivedChar = Serial.read();
        
        newData = true;
    }
}

void updateValve() {
    if (newData == true) {
        
      switch (receivedChar) {
        case '1':
          digitalWrite(12, 1);
          break;
         case '2':
          digitalWrite(12, 1);
          delay(10);
          digitalWrite(12, 0);
          break;
         default:
          digitalWrite(12, 0);
          break;
      }
      
        newData = false;
    }
}
