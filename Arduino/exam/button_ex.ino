//按下按鈕顯示紅燈，放開則閃爍綠燈10秒
const int button = 2;
const int LED_g = 10;
const int LED_r = 11; 
int buttonState, key = 0;

void setup(){
  pinMode(button,INPUT);
  pinMode(LED_g,OUTPUT);
  pinMode(LED_r,OUTPUT);
}

void loop(){
  buttonState = digitalRead(button);

  if(buttonState == HIGH){
    digitalWrite(LED_r,HIGH);
    key = 1;
  }
  else{
    digitalWrite(LED_r,LOW);
    if(key == 1){
      for(int i = 0; i<10, i ++){
        digitalWrite(LED_g,HIGH);
        delay(1000);
        digitalWrite(LED_g,LOW);
        delay(1000);
      }
    }
    key ++;
  }
  delay(10);
}
