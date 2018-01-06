



const int potenciometro = A0; // Variavél que especifica o pino analógico de leitura do potenciometro 
int valor;      // Variavel que recebe o valor a ser lido do potenciometro 
int velocidade;   // mapeia a velocidade lida do potenciometro para um valor de 0 a 255, isto ocorre porque a saida digital so aceita valores de 0 a 255 
                 // no qual 255 é tamanho maximo de bits que um valor pode ser representado em binário


void setup(){
  pinMode(2,OUTPUT);  //define o pino digital 2 - PWM- do arduino como porta de saída - (OUTPUT) para a saida da velocidade do motor lida do potenciometro
}

void loop(){


valor = analogRead(potenciometro); //lê do arduino o valor do potenciometro 
velocidade = map(valor, 0, 1023, 0, 255); //mapeia de 0 a 255

acionaMotor(velocidade); //aciona o motor com a velocidade lida. 

}
     

//procedimento para acionamento do motor
void acionaMotor(int velocidade){
 analogWrite(2,velocidade); 
}

