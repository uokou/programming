const int LED = 4;
const int button = 2;
int buttonState;

void setup(){
  pinMode(button,INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  buttonState = digitalRead(button);

  if (buttonState == HIGH){
    digitalWrite(LED, HIGH);
  }
  else if (buttonState == LOW){
    digitalWrite(LED,LOW);
  }
}
