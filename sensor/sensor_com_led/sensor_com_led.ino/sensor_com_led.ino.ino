 
//Pino analógico em que o sensor está conectado.
int sensor = 0;      
 
//Método setup, executado uma vez ao ligar o Arduino.
void setup(){
  
  //Ativando o serial monitor que exibirá os 
  //valores lidos no sensor.
  Serial.begin(9600);

  // Definindo a porta ~10 como OutPut
  pinMode(10,OUTPUT);
}
 
//Método loop, executado enquanto o Arduino estiver ligado.
void loop(){

  if(analogRead(sensor) >= 400  ){
    apagaLed();
  }else{
    acendeLed();
  }
  delay(1000);  // a cada um segundo
}

void acendeLed(){
  Serial.print("Luminosidade: ");
  Serial.println(analogRead(sensor));
  Serial.print("Baixa luminosidade, ligando led...");
  digitalWrite(10,HIGH);
}

void apagaLed(){
  Serial.print("Luminosidade: ");
  Serial.println(analogRead(sensor));
  Serial.print("Alta luminosidade, desligando led...");
  digitalWrite(10,LOW);
}

