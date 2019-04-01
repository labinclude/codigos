void irFrente(){
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(analogOutPin, LOW);
}
void irTras(){
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(analogOutPin, HIGH);
}

void irDireita(){
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}
void irEsquerda(){
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);  
}

void freio() {
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void setup() {
  Serial.begin(9600);
  
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  Serial.println("Ola ROBO 1.0 Iniciado!");
  int freio = freio;
}

void loop() {
 
  if(Serial.available() > 0) {
    char caractere = Serial.read();
    Serial.print("> ");
    Serial.println(caractere);

    switch(caractere) {
     
      case 'w':
        irFrente();
        break;
      case 's':
        irTras();
        break;
      case 'a':
        irEsquerda();
        break;
      case 'd':
        irDireita();
        break;
      case 'f':      
        freio();
        break;
      default:
        Serial.print("Erro ");
        Serial.println(caractere);
    }
  }
}
