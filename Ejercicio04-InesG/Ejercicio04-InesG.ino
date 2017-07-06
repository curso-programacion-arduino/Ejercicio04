#include <Servo.h>

#define PIN_SERVO 9
#define PIN_POT A0

Servo miservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  miservo.attach(PIN_SERVO);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pos_potenciometro = analogRead(PIN_POT);
  Serial. println(pos_potenciometro);
  int pos_servo = map(pos_potenciometro, 1, 1023, 10, 170);
  miservo.write(pos_servo);
  delay(30);
}
