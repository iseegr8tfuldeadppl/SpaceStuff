#include <CheapStepper.h>
CheapStepper stepper;

#define ledOrange 4
#define ledRed 3

void setup() {
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

double last_step = 0.0;
double stepping_period = 3.523225 * 1000;
boolean motor_turning = false;
void loop() {
  motor_turning = !digitalRead(A4) == HIGH && (digitalRead(A5) == HIGH || motor_turning);
  
  if(motor_turning){
    if(millis() - last_step >= stepping_period){
      last_step = millis();
      stepper.step(true);
    }
    digitalWrite (ledOrange, HIGH);
    digitalWrite (ledRed, LOW);
  } else {
    digitalWrite (ledOrange, HIGH);
    digitalWrite (ledRed, LOW);
    stepper.step(false);
  }
  delay(6);
}
