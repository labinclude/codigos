#include <Tron.h>
Tron tron;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);

  Serial.println("galaxy");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
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
