#include <Servo.h>
#define PIN_SERVO 9
#define PIN_POT A0

Servo miservo;

void setup() {
  // put your setup code here, to run once:
  miservo.attach(PIN_SERVO);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(PIN_POT);
  val = map(val, 0, 1023, 0, 255);
  miservo.write(val);

}
