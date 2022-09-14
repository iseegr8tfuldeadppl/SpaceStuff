#include <CheapStepper.h>
CheapStepper stepper;

#define ledOrange 4
#define ledRed 3

void setup() {
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  if (digitalRead(A4) == HIGH){
    digitalWrite (ledOrange, HIGH);
    digitalWrite (ledRed, LOW);
    stepper.step(false);
    delay(6);
  }
  if (digitalRead(A5) == HIGH){
    digitalWrite (ledOrange, HIGH);
    digitalWrite (ledRed, LOW);
    stepper.step(true);
    delay(6);
  }
}
