//author Ardeshir Lindstrom (Adi)
// 2023-10-01
// deployed to arduino on lead float.  works.

const int stepper = 2; // pin number
const int steps = 400;  // per 1 rotation
const float cycle = 1/16000000;  // cycle time in secs
const int startup = 15;

double rpm = 0;

void setup() {
pinMode(2, OUTPUT);
}

void loop() {
 
      digitalWrite(stepper, HIGH);
      delay(53);
      digitalWrite(stepper, LOW);
      delay(53);
   
}
