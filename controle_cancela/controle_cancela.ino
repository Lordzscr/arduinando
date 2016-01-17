/* Enviando dados do PC para o Arduíno.
   Vamos piscar um LED de forma proporcional ao valor recebido a partir do PC 
*/

#include <Servo.h>

Servo motor;
char acao;

boolean cancela_fechada = true; // a cancela é fechada logo no inicio

void fecharCancela(){
  int i;
  for(i=90;i>=0;i--) {
    motor.write(i);
    delay(10);
  }
  Serial.println("Cancela fechada com sucesso!");
  Serial.print("Angulo atual: ");
  Serial.println(motor.read());
}

void abrirCancela(){
  int i;
  for(i=1;i<=90;i++) {
  motor.write(i);
    delay(10);
  }
  Serial.println("Cancela aberta com sucesso!");
  Serial.print("Angulo atual: ");
  Serial.println(motor.read());
}


void setup() {
  Serial.begin(9600);
  motor.attach(3);
  fecharCancela();
}

void loop()
{
 
  
  if (Serial.available()) { // Verificar se há caracteres disponíveis
    
   
    acao = Serial.read(); // Armazena caractere lido
    

     if(acao == 'a' && cancela_fechada){
      Serial.println("Angulo Antes de abrir: ");
       Serial.println(motor.read());
      Serial.println("Abrindo Cancela");
      abrirCancela();
      cancela_fechada = false;
     }
     if(acao == 'f' && !cancela_fechada){
      Serial.println("Angulo Antes de fechar: ");
       Serial.println(motor.read());
      Serial.println("Fechando Cancela");
       fecharCancela();
       cancela_fechada = true;
     }
  } 
 
}



