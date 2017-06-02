#include <Wire.h>  // comuinicacion I2C
#include <LiquidCrystal_I2C.h> //display LCD
#include <Keypad.h> //teclado 4x4
#include <DDS.h> //AD9850 generador de señal senoidal y cuadrada, dos canales
#include <SoftwareSerial.h> //Otro puerto de salida serial que no es el propio del arduino, (para bluetooth).

LiquidCrystal_I2C lcd(0x26, 16, 2); //por defecto 0x27

const byte ROWS = 4; // Cuatro filas
const byte COLS = 4; // Cuatro columnas
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'#','0','*','D'}
};

const int W_CLK = 2;
const int FQ_UD = 3; 
const int DATA = 4;
const int RESET = 5;
double freq = 1000000;
DDS dds(W_CLK, FQ_UD, DATA, RESET);

SoftwareSerial BT1(12,13); // RX, TX recordar que se cruzan

void setup() {
}
void loop () {
}
