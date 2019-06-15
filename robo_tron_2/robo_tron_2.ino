/**
Robo Include

Modulo RGB
Modulo Ultrassonico
Modulo Bluetooth

Ponte H
Letícia

5 cabos brancos
1 cabo preto

Bateria

Código Disponível abaixo...
*/

#include <Tron.h>

#define pinA1 12
#define pinA2 8
#define pinB1 15
#define pinB2 9

Tron arduino;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Ola mundo Include"));

  pinMode(pinA1, OUTPUT);
  pinMode(pinA2, OUTPUT);
  pinMode(pinB1, OUTPUT);
  pinMode(pinB2, OUTPUT);
}

void executaComando(int a1, int a2, int b1, int b2) {
  digitalWrite(pinA1, a1);
  digitalWrite(pinA2, a2);
  digitalWrite(pinB1, b1);
  digitalWrite(pinB2, b2);
}

#define frente() executaComando(HIGH, LOW, HIGH, LOW)
#define re() executaComando(LOW, HIGH, LOW, HIGH)
    }
  } else {
    isAtivo = false;
    arduino.led_apagar('B');
    para();
#define esquerda() executaComando(HIGH, LOW, LOW, LOW)
#define direita() executaComando(LOW, LOW, HIGH, LOW)
#define para() executaComando(LOW, LOW, LOW, LOW)

boolean isAtivo = false;
void loop() {
  if (Serial.available() > 0) {
    char c = Serial.read();
    isAtivo = true;

    if (c == 'f' || c == 'r' || c == 'e' || c == 'd') {
      arduino.led_acender('B', "green");
    }

    switch (c) {
      case 'f':
        frente();
        break;
      case 'r':
        re();
        break;
      case 'd':
        direita();
        break;
      case 'e':
        esquerda();
        break;
      default:
        Serial.print(F("Comando inválido: "));
        Serial.println(c);
        arduino.led_apagar('B');
        para();
    }
  } else {
    isAtivo = false;
    arduino.led_apagar('B');
    para();
  }

  double distancia = arduino.ultrassonico('A');
  if (isAtivo && distancia < 50) {
    arduino.led_acender('B', "red");
    para();
  }
}
