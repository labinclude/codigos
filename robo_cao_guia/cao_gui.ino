// Inicia biblioteca da Tron
#include <Tron.h>

// O bluetooth deve ser conectado nos pinos 0 e 1 do arduino, observar qual é o TX e qual é o RX,
// observar material sobre conexão do bluetooth com arduino, observar que o bluetooth é 3.3V e
// a conexão com Arduino (5V) pode QUEIMAR ele

// Instacia objeto da tron
Tron tron;

// Função de configuração
void setup() {

  // Pinos de configuração da ponte H
  // Pinos digitais, 3,5,6,9
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  
  // Inicializa a serial
  Serial.begin(9600);
  
}

void loop() {
  // Verifica se há algo para ser lido
  if (Serial.available()) {
  
    // Ler letra recebida pela serial
    char c = Serial.read ();
    if (c == 'F') {
      analogWrite(3, 128);
      analogWrite(5, 0);
      analogWrite(6, 128);
      analogWrite(9, 0);
      tron.led_acender('A', "green");
    }
    if ( c == 'P') {
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);
      analogWrite(9, 0);
      tron.led_acender('A', "red");
    }
    if ( c == 'e') {
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 128);
      analogWrite(9, 0);

    }
    if ( c == 'D') {
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 128);
      analogWrite(9, 0);

    }
    if ( c == 'd') {
      analogWrite(3, 0);
      analogWrite(5, 128);
      analogWrite(6, 128);
      analogWrite(9, 0);

    }
    if ( c == 'E') {
      analogWrite(3, 128);
      analogWrite(5, 0);
      analogWrite(6, 0);
      analogWrite(9, 128);

    }
  }
}
