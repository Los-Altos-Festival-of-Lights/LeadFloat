//author Ardeshir Lindstrom (Adi)
// 2023-10-01

const int stepper = 2; // pin number
const int steps = 400;  // per 1 rotation
const float cycle = 1/16000000;  // cycle time in secs
const int startup = 15;
double rpm = 1.5;

void setup() {
  pinMode(2, OUTPUT);
}


void loop() {
  step(rpm); 
}


void step(double rpm){

  int Del = (rpm*steps/60);/*steps per second*/
  Del = 1000/Del;/*miliseconds per step*/
  Del = Del/2; /*split the difference because the time occurs twice in the loop*/
 
  digitalWrite(stepper, HIGH);
  delay(Del);
  digitalWrite(stepper, LOW);
  delay(Del);
 
}
