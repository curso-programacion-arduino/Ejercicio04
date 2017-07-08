
/*
 * Ejercicio04
 * Servomotor con potenciometro.
 * Segun la posicion del potenciometro
 * girara el servo unos grados.
 */

#include <Servo.h> // Libreria para controlar el servo

#define PIN_SERVO 9
#define PIN_POT A0

Servo miservo;

void setup()
{
  miservo.attach(PIN_SERVO);
}

void loop()
{
  // Leemos la posicion del potenciometro
  int val = analogRead(PIN_POT); 
  
  val = map(val, 0, 1023, 10, 170);
  /*map ajusta la escala de valores a usar...
   * ver: https://www.arduino.cc/en/Reference/Map
   * En este caso toma los valores del potenciometro y
   * los cambia por el rango de 10 a 170.
   */
  miservo.write(val);
  /*
   * miservo.write(val); le pasa al servo
   * los grados que se ha de mover, segun el valor de "val"
   * "val" toma valor con map...
   */
  delay(15);
}
