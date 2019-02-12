int leitura1 = 0;
int leitura2 = 0;

void setup() {
    Serial.begin(9600);
}

void loop(){
    leitura1 = analogRead(A0);

    int dif = leitura1-leitura2;
    if (abs(dif)>3){
      leitura2 = leitura1;
      Serial.println(leitura1);
      delay(100);
    }
}
