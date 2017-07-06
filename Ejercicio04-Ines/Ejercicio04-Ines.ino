#include <Servo.h>
//Mover el servo entre las posiciones de 10º a 170º en función del valor leído
//en el potenciómetro.

//Puerto del servo
#define PIN_SERVO 9
//Puerto del potenciometro
#define PIN_POT A0
int estadoInicial=0;
int estadoActual=0;
Servo miservo;

void setup() {
 Serial.begin(9600);
 Serial.println("Por favor usuario mueve el potenciometro");
 miservo.attach(PIN_SERVO);
 estadoInicial = analogRead(PIN_POT);
 
}

void loop() {
 //leo y guardo el valor registrado por el pin del potenciometro
 estadoActual = analogRead(PIN_POT);
 if (estadoInicial != estadoActual) {
   int val = analogRead(PIN_POT);
   //Guardo los valores (valor recogiso por el potenciometro, valor min, valor max, 10 grados, 170 grados)
   val = map(val, 0, 1023, 10, 170);
   //mueve el servo
   miservo.write(val);
   Serial.println(val);
   delay(15);
 }
 estadoInicial = estadoActual;
}
