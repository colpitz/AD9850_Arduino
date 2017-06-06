#include <Wire.h>  // comuinicacion I2C
#include <LiquidCrystal_I2C.h> //display LCD
#include <Keypad.h> //teclado 4x4
#include <DDS.h> //AD9850 generador de señal senoidal y cuadrada, dos canales
#include <SoftwareSerial.h> //Otro puerto de salida serial que no es el propio del arduino, (para bluetooth).

//LCD
LiquidCrystal_I2C lcd(0x26, 16, 2); //por defecto 0x27

// Definir teclado 
const byte ROWS = 4; // Cuatro filas
const byte COLS = 4; // Cuatro columnas
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'#','0','*','D'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 4, 5, 6, 7 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 8, 9, 10, 11 }; 


//AD9850 DDS
const int W_CLK = A3;
const int FQ_UD = A2;
//const int SerialData = A1;
const int DATA = A0;
//const int RESET = ?? ;
double freq = 1000000;
DDS dds(W_CLK, FQ_UD, DATA, RESET);

// puerto serie
SoftwareSerial BT1(12,13); // RX, TX recordar que se cruzan

// Encoder
int aPin = 5;
int bPin = 6;
int buttonPin = 4;
int state = 0;

void setup() {
}
void loop () {
}
