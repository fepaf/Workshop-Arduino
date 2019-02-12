int led = 2;
int botao = 3;
int pressionado = 0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
}

void loop() {
  pressionado = digitalRead(botao);
  if (pressionado == HIGH){
      digitalWrite(led,HIGH);
      delay(2000);
  }
  else{
      digitalWrite(led,LOW);
  }

}
