#include <Servo.h>

Servo motor;

void setup() {
  // put your setup code here, to run once:
  motor.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=1;i<90;i++) {
  motor.write(i);
    delay(10);
  }

  delay(1000);

  for(i=90;i>1;i--) {
  motor.write(i);
    delay(10);
  }


  delay(1000);
}
