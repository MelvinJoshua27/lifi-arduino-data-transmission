// Receiver code: Decode LiFi light signals

#define RECEIVER_PIN A0       // LDR or photodiode to analog pin A0
int threshold = 500;          // Light intensity threshold
int bitDelay = 100;           // Must match transmitter
char receivedChar = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("LiFi Receiver Ready");
}

void loop() {
  receivedChar = receiveByte();
  Serial.print(receivedChar);
  if (receivedChar == '#') {
    Serial.println();  // End of message
    delay(3000);       // Wait before listening again
  }
}

char receiveByte() {
  char result = 0;
  for (int i = 0; i < 8; i++) {
    int sensorValue = analogRead(RECEIVER_PIN);
    bool bit = sensorValue > threshold;
    bitWrite(result, i, bit);
    delay(bitDelay);
  }
  return result;
}
