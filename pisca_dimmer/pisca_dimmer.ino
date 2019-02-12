int led = 10;
int valor_pot = 0;
int brilho = 0;

void setup() {
    pinMode(led,OUTPUT);
}

void loop(){
    valor_pot = analogRead(A0);

    brilho = map(valor_pot, 0, 1023, 0, 255);

    analogWrite(led,brilho);

    /*digitalWrite(led,HIGH);
    delay(valor_pot);
    digitalWrite(led,LOW);
    delay(valor_pot);*/
}
