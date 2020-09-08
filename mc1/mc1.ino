#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);
int value[] = {0,0,0,0};

int pot[] = {A0,A1,A2,A3};

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  for(int i = 0; i < 4; i++){
    pinMode(pot[i],INPUT);
  }
}

void loop() {

  for(int i = 0; i < 4; i++){
    value[i] = analogRead(pot[i]);
    Serial.print(value[i]);
    Serial.print(", "); 
  }
  Serial.println();
  
  mySerial.print("Pot1: ");
  mySerial.print(value[0]);
  mySerial.print(", ");
  mySerial.print("Pot2: ");
  mySerial.print(value[1]);
  mySerial.print(", ");
  mySerial.print("Pot3: ");
  mySerial.print(value[2]);
  mySerial.print(", ");
  mySerial.print("Pot4: ");
  mySerial.print(value[3]);
  mySerial.println();

  delay(1000);
}
