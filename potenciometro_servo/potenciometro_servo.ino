#include<Servo.h>

Servo motor;
int angulo = 30, leitura;

void setup() {
    motor.attach(3);
}

void loop() {
    leitura = analogRead(A0);
    angulo = map(leitura,0,1023,0,180);
    motor.write(angulo);
    delay(100);
}
