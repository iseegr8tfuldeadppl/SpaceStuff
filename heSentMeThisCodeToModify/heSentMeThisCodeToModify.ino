/*<br>Sketch by SimonRob 
3D printed equatorial mount for DSLR
Instructables
*/

int buttonA4 = 0;
int buttonA5 = 0;
int ledOrange = 4;
int ledRed = 3;

#include <CheapStepper.h>

CheapStepper stepper;

void setup() {
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {

buttonA4 = digitalRead(A4);
buttonA5 = digitalRead(A5);

if (buttonA4 == HIGH){
  buttonA4 = digitalRead(A4);
  buttonA5 = digitalRead(A5);
  digitalWrite (ledOrange, HIGH);
  digitalWrite (ledRed, LOW);
  stepper.step(false);
  delay(6);
}
if (buttonA5 == HIGH){
  buttonA4 = digitalRead(A4);
  buttonA5 = digitalRead(A5);
  digitalWrite (ledOrange, HIGH);
  digitalWrite (ledRed, LOW);
  stepper.step(true);
  delay(6);
}
while((buttonA4 == LOW)&&(buttonA5 == LOW)){
  buttonA4 = digitalRead(A4);
  buttonA5 = digitalRead(A5);
  digitalWrite (ledOrange, LOW);
  digitalWrite (ledRed, HIGH);
  stepper.step(false);
  delay(3523);
    
}
} 
