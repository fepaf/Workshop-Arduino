int led = 2;
int botao = 3;
int pressionado = 0;
int alternado = 0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
}

void loop() {
  pressionado = digitalRead(botao);
  if (pressionado == HIGH){
      delay(200);
      alternado ^= 1;
  }
  if (alternado == 1){
      digitalWrite(led,HIGH);
  }
  else{
      digitalWrite(led,LOW);
  }

}
