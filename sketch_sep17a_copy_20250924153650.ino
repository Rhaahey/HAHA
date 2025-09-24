int pin[3] = {2, 4, 6};
int B = 8;
bool BS = 0;
int j = 0, add = 1 ;
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<3;i++){
    pinMode(pin[i], OUTPUT);
  }
  pinMode(B, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=2;i+=1){
     digitalWrite(pin[i], 0);
  }
  // if(digitalRead(B)){
  //   BS = !BS;
  // }
  if(digitalRead(B)){
    digitalWrite(pin[0], 1);
  }
  else
  {
    digitalWrite(pin[2], 1);
  }
  delay(100);
}