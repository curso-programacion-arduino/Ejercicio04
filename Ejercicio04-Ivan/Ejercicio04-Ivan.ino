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
  int potenciometro;  // variable para almacenar el valor del potenciometro
  potenciometro = analogRead(A0); //le asignamos el valor de la entrada
  int grados = map(potenciometro, 0, 1023, 10, 170); //mapeamos el valor de potenciometro a grados
  miservo.write(grados); //posicionamos el servo
  //delay(500); // por si hace falta
}
