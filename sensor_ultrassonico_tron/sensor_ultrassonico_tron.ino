// Inclui biblioteca tron no código, observar se a biblioteca está devidamente instalada
#include <Tron.h>

//Criar um objeto da classe Tron <objeto>, pode ser qualquer nome, lembrar de usar em todo o código
Tron central;

// Função de configuração
void setup() {
  Serial.begin(9600);
  Serial.println("Seja bem vindo!");
}

void loop() {
  // Variável leitura armazena valor lido pelo sensor ultrassônico na porta 'B'
  int leitura = central.ultrassonico('B');
  // Imprime valor lido na serial
  Serial.println(leitura);
  
  // Se leitura for igual a 1, apga o led
  if (leitura == 1) {
    central.led_apagar
  }

  // Se leitura menor que 50 acende o led RGB na cor vermelha
  if (leitura < 50){
  central.led_acender('A', "red");
  
 } 
 Se não, acende na cor verde
 else {  
  central.led_acender('A', "green");
}

  delay(50);
}
