#include <Servo.h>
#define PIN_SERVO 9 //alias para el pin del servo
int pos = 0; //variable pos tipo entero inicializo a 0
Servo miservo; //objeto servo lo llamo miservo
void setup() {
  // put your setup code here, to run once:
 miservo.attach(PIN_SERVO); //asignar el pin_servo pin9 al servo definido arriba
}
void loop() {
  pos = map (analogRead (A0),0,1023,10,170); // escalar 0-1023 (entrada analogica A0) a 10-170
  miservo.write(pos);
}
