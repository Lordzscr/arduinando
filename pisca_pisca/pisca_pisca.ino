//Projeto arduino pisca led
 /*
  * Para construir este projeto você vai precisar de:
  * um Arduino, uma protoboard, um led, um resistor de 470 ohms e  dois fios jumper;
  * E os componentes eletrônicos devem ser conectados da seguinte forma:
  * primeiro coloque o led na protoboard, e na perna positiva do led (a perna maior) coloque o resistor e ligue o resistor no pino digital 10 do arduino.
  * A perna negativa do led (a perna menor) ligue no pino GND do arduino.
  */
  
void setup() {
  pinMode(10,OUTPUT);
}
 
void loop() {
  
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
}
