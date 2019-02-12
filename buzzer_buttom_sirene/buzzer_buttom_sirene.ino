int buzzer = 13;
void setup(){
  pinMode(buzzer,OUTPUT);
}

void loop(){
  tone(buzzer,1500);
  delay(200);
  tone(buzzer,2000);
  delay(200);
  
}
