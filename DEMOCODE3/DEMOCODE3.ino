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


int buttonPin = 9;
int ledPin = 13;
int ledDelay = 5000;
bool ledBlinkState = HIGH;
long ledTimer;
bool buttonPressed;
bool ledState;

void setup() {
 pinMode(buttonPin, INPUT);
 pinMode(ledPin, OUTPUT);

 ledTimer = millis();
}

void loop() {
 determineState();
 display();
}

void determineState() {
 checkBlinkTimer();
 checkButtonPress();
 determineLedState();
}

void checkBlinkTimer() {
 if (millis() - ledTimer > ledDelay) {
 ledTimer = millis();
 ledBlinkState = !ledBlinkState;
 }
}

void checkButtonPress() {
 buttonPressed = (digitalRead(buttonPin) == HIGH);
}

void determineLedState() {
 if (ledBlinkState || buttonPressed) {
 ledState = HIGH;
 } else {
 ledState = LOW;
 }
}

void display() {
 digitalWrite(ledPin, ledState);
}

