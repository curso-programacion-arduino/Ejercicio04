int valor;
#include <Servo.h>
Servo miservo;
void setup() {
  // put your setup code here, to run once:
 pinMode(A0,INPUT);
  Serial.begin(9600);

  miservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
valor = analogRead(A0);
valor = map(valor, 0, 1023, 10, 170);
Serial.println (valor);
miservo.write(valor);
}
