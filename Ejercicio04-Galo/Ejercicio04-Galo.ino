#include <Servo.h>

#define SERVO 9
#define POT A0

Servo miservo;

void setup()
{
  Serial.begin(9600);
  miservo.attach(SERVO);
}

void loop()
{
  int val = analogRead(POT);
  val = map(val, 0, 1023, 40, 100);
  miservo.write(val);
  delay(15);
  Serial.println(analogRead(POT));
  delay(15);
}


