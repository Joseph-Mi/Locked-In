#include <Arduino.h>
#include <SoftwareSerial.h>

#define RX_PIN 2 


SoftwareSerial bluetooth()

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}