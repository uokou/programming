const int MIC = A2;
const int LED = 11;
int micval,ledval = 0;

void setup(){
  pinMode(MIC,INPUT);
  pinMode(LED,OUTPUT);
}

void loop(){
  micval = analogRead(MIC);
  ledval = map(micval,0,1023,0,255);
  if(micval > 1){
    analogWrite(LED,ledval);
  }
  else{
    digitalWrite(LED,LOW);
  }
  
  //delay(100);
}
