// Modulo Bluetooth conectado na porta F
// Ponte H conectado na porta G

void setup() {
  // Inicializando comunicação Serial
  Serial.begin(9600);
  // Definindo os pinos da ponte H como saída
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  // Quando receber algum dado na porta serial 
  if (Serial.available()) {

    // Armazenar a letra(caractere) que recebemos na porta serial
    char c = Serial.read ();

    // Robô irá para a frente se receber uma letra 'f' na serial
    if (c == 'f') {
      // Faz o robô andar para frente
      analogWrite(3, 0);
      analogWrite(5, 128);
      analogWrite(6, 0);
      analogWrite(9, 128);
    }

    // Robô irá parar se receber uma letra 'p' na serial
    if (c == 'p') {
      // Faz o robô parar
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);
      analogWrite(9, 0);
    }
    
    // Robô irá para tras se receber uma letra 't' na serial
    if (c == 't') {
      // Faz o robô andar para tras
      analogWrite(3, 128);
      analogWrite(5, 0);
      analogWrite(6, 128);
      analogWrite(9, 0);  
    }
     
    // Robô irá para esquerda se receber uma letra 'e' na serial
    if (c == 'e') {
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);
      analogWrite(9, 128);
    }
    
    // Robô irá para direita se receber uma letra 'd' na serial
    if (c == 'd') {
     analogWrite(3, 0);
     analogWrite(5, 128);
     analogWrite(6, 0);
     analogWrite(9, 0);
    }

  }
  
}
