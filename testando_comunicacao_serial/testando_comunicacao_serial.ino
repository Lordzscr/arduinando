/* Enviando dados do PC para o Arduíno.
   Vamos piscar um LED de forma proporcional ao valor recebido a partir do PC 
*/

const int ledPin = 10; // Pino ao qual o LED será conectado
int piscando = 0; // variável para armazenar taxa de “piscagem”

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // Pino 13 será de saída de sinais
}

void loop()
{
  if (Serial.available()) { // Verificar se há caracteres disponíveis
    char caractere = Serial.read(); // Armazena caractere lido
    //if ( isDigit(caractere) ) {  // Verificar se o caractere ASCII é um dígito entre 0 e 9
    //piscando = caractere - '0'; // Convertendo ASCII em valor numérico (0 = 48)
    //piscando = piscando * 100; // Escalando taxa de tempo multiplicando por 100ms
    //}

    if(caractere == 'l'){
      ligaLed1();
    }else{
      desligaLed1();
    }
    
  }
  
  //pisca(); // Chamando a função blink(), que será declarada abaixo.
}
/* Declarando a função pisca() que fará o LED piscar na taxa deternminada pelo valor armazenado na variável piscando
*/
void ligaLed1(){
  digitalWrite(ledPin, HIGH);
}

void desligaLed1(){
  digitalWrite(ledPin, LOW);
}
