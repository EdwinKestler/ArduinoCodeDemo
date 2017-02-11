/*
  Boton demo

  ECodigo sobre mejoras al codigo n arduino para prototipos
  Utiliza Un 238 de 3.3V
  LED
  un Boton momentaneo Rojo 
 
  
  The circuit:
  LED - al pin13 (el que tre por defecto)
  Boton VCC, GND se riva en 220ohm a PIN 9
  Resitencia de 10K entre VCC y boton, Cambio de estado cuendo se presiona
  
  Fue creado por Edwin Kestler el 11/2/2017
  Ultima Fecha de Modificacion: 11/02/2017
  por Edwin Kestler

  Ver www.flatbox.co


*/

void setup() {
 pinMode(13, OUTPUT);
}

void loop() {
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);
 delay(1000);
}
