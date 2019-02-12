int segA = 3;
//int mask[10] = {126,48,109,121,51,91,95,112,127,123};
int mask[10] = {63,6,91,79,102,109,125,7,127,111};

void setup() {
  for (int i=2; i<9; ++i){
      pinMode(i,OUTPUT);
  }
}

void loop(){
    for (int i=0; i<10; ++i){
        for (int j=0; j<7;++j){
            if (mask[i]&(1<<j)){
                digitalWrite(j+2,LOW);
            }
            else{
                digitalWrite(j+2,HIGH);
            }
        }
        delay(1000);
    }
    
}
