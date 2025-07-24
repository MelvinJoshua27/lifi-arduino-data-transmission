// Transmitter code: LiFi data via LED

#define TRANSMIT_LED 12           // LED connected to digital pin 12
String text = "Hello World#";     // End character '#' for termination
int bitDelay = 100;               // Delay in ms between bits

void setup() {
  pinMode(TRANSMIT_LED, OUTPUT);
  digitalWrite(TRANSMIT_LED, LOW);
  Serial.begin(9600);
  Serial.println("LiFi Transmitter Ready");
}

void loop() {
  for (int i = 0; i < text.length(); i++) {
    transmitByte(text.charAt(i));
  }
  delay(3000);  // wait before repeating transmission
}

void transmitByte(char ch) {
  for (int i = 0; i < 8; i++) {
    bool bit = bitRead(ch, i);
    digitalWrite(TRANSMIT_LED, bit);
    delay(bitDelay);
  }
  digitalWrite(TRANSMIT_LED, LOW);  // Ensure LED off after byte
  delay(bitDelay);                  // Inter-byte spacing
}
