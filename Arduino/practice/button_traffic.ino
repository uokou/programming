const int button = 2;
const int Led_g = 10;
const int Led_r = 11; 
const int Led_y = 12;
int buttonState, key = 0;

void setup(){
  pinMode(button,INPUT);
  pinMode(Led_g,OUTPUT);
  pinMode(Led_r,OUTPUT);
  PinMode(Led_y,OUTPUT);
}

void loop(){
  buttonState = digitalRead(button);

  if(buttonState == HIGH){
    digitalWrite(Led_g,HIGH);
    delay(5000);
    digitalWrite(Led_g,LOW);
    digitalWrite(Led_y,HIGH);
    delay(500);
    digitalWrite(Led_y,LOW);
    digitalWrite(Led_r,HIGH);
    delay(5000);
  }
  else{
    digitalWrite(Led_y,HIGH);
    delay(500);
    digitalWrite(Led_y,LOW);
    delay(500);
  }
}
