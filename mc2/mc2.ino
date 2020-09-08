#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  mySerial.listen();
  while (mySerial.available() > 0) {
    char inByte = mySerial.read();
    Serial.println(inByte);
  }
}
