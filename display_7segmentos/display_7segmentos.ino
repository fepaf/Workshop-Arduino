int segA = 3;

void setup() {
  for (int i=2; i<9; ++i){
      pinMode(i,OUTPUT);
  }
}

void loop(){
    for (int i=2; i<10; ++i){
        digitalWrite(i,LOW);
        delay(500);
        digitalWrite(i,HIGH);
    }
    //digitalWrite(7,HIGH);
}
