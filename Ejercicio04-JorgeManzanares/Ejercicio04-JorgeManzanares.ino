//Librería Servo
#include <Servo.h>
#define PIN_SERVO 9
#define PIN_POT A0
Servo miservo;
int pos;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   miservo.attach(9);
}

void loop() {
  int pos_pot = (analogRead(PIN_POT));
  Serial.print(pos_pot);
  pos=map(pos_pot,1,1023,10,170);
  miservo.write(pos);
//Serial.println(pos_pot);
//Serial.println(pos);
delay(10);
// put your main code here, to run repeatedly:
}
