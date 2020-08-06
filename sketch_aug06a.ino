#include <Servo.h>
Servo motor1;
int x;
int y;

void setup() {
  motor1.attach(4);
  pinMode(A3,INPUT);
}
void loop() {
  x = analogRead(A3);
  y = map(x,0,1023,0,180);
  motor1.write(y);
}
