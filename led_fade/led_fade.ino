int led = 3;
int valor_pot = 0;
int brilho = 0;

void setup() {
    pinMode(led,OUTPUT);
}

void loop(){
    valor_pot = analogRead(A0);

    brilho = map(valor_pot, 0, 1023, 0, 255);

    analogWrite(led,brilho);
}
