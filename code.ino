void setup() {
  // initialize both serial ports:
  Serial.begin(115200);
  Serial3.begin(115200);
}

void loop() {
  // read from port 1, send to port 0:
  if (Serial3.available()) {
    int inByte = Serial3.read();
    Serial.write(inByte);
  }

  // read from port 0, send to port 1:
  if (Serial.available()) {
    int inByte = Serial.read();
    Serial3.write(inByte);
  }
}
