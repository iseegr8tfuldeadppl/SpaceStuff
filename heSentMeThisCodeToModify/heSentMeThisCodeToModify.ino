#include <CheapStepper.h>
CheapStepper stepper;

#define ledOrange 4
#define ledRed 3

void setup() {
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

boolean motor_turning = false;
void loop() {
  motor_turning = !digitalRead(A4) == HIGH && (digitalRead(A5) == HIGH || motor_turning);
  
  if(motor_turning){
    stepper.step(false);
    delay(3523);
    digitalWrite (ledOrange, HIGH);
    digitalWrite (ledRed, LOW);
  } else {
    digitalWrite (ledOrange, HIGH);
    digitalWrite (ledRed, LOW);
  }
}
