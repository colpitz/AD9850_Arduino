# AD9850_Arduino

Arduino con:
AD9850, Encoder rotativo, keyboard 4x4, LCD I2C, Bluetooth.

Conexiones:
Bluetooth - Rx -> (13 Tx Arduino), Tx -> (12 Rx arduino).
Encoder - SW -> ()  DT -> () CLK -> ().
Keyboard - (4, 5, 6, 7) (8, 9, 10,11).
Display LCD I2C - (A4), (A5).
AD9850 - Serial W_CLOCK -> (A3), Serial FQ_UD -> (A2), Serial Data [D7] -> (A1), D7 -> (A0)

Descripción:
Control del DDS AD9850 con teclado y encoder rotativo, presentacion de datos en LCD
Alternativamente control y presentación de datos con Android en Processing.

Librerias necesarias:
<SoftwareSerial.h> para control de Bluetooth atraves de los pines 12,13
y poder dejar libre el puerto de comunicaciones del Arduino para presentacion de datos en el PC
