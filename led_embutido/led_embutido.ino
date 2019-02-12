#include <Servo.h>

int n=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  
  n = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=n;

  x^=(x>>1);
  for (int i=0; i<4; ++i){
      if ((1<<i)&x){
          digitalWrite(10+i,HIGH);
      }
      else{
          digitalWrite(10+i,LOW);
      }
  }

  
  delay(1000);
  
  n = (n+1)%16;
}
