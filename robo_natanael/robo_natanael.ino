#include <Servo.h> 
//Natanael G.santos
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;

int valor;
void setup() {
  //pino de saida 
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 // Inicializar comunicaçao Serial
 Serial.begin(9600); 
}  
    
void loop()  
{  
  if (Serial.available() > 0) {
    
     if (valor == 4 ) {
       //motor gira para frente caso receba o comando 4
       digitalWrite(IN1, HIGH);
       digitalWrite(IN2, LOW);
       digitalWrite(IN3, HIGH);
       digitalWrite(IN4, LOW);
       Serial.println("frente");
     }
  
     if (valor == 2 ) {
       // Motor gira para tras caso receba o comanto dois
       digitalWrite(IN1, LOW);
       digitalWrite(IN2, HIGH);
       digitalWrite(IN3, LOW);
       digitalWrite(IN4, HIGH);
       Serial.println("tras");
     }
  }
}


