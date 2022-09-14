#include <CheapStepper.h>
CheapStepper stepper;

#define ledOrange 4
#define ledRed 3

void setup() {
  Serial.begin(9600);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  Serial.println("A4: " + String(digitalRead(A4)) + " A5: " + String(digitalRead(A5)));
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
