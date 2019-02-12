#include <Servo.h>

Servo motor1;

int pos = 0;
void setup() {
  // put your setup code here, to run once:
  motor1.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int pos=0; pos<180; pos+=30){
      motor1.write(pos);  
      delay(1000);
  }
  for (int pos=180; pos>0; pos-=30){
      motor1.write(pos);  
      delay(1000);
  }

}
