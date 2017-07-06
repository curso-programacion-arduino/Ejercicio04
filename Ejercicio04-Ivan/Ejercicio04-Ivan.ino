#include <Servo.h>

Servo miservo;

#define PIN_SERVO 9

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Inicializo Servo
  Serial.println(F("Inicializando servo..."));
  miservo.attach(PIN_SERVO);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potenciometro; 
  potenciometro = analogRead(A0);
  int grados = map(potenciometro, 0, 1023, 10, 170);
  miservo.write(grados);
  //delay(500);
}
