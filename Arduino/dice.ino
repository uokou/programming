//根據Arduino Uno與S4 sensor上之滑桿電阻改變色子模式(黃燈為D6、紅燈為D10、綠燈為D20)
//按下按鈕可骰出一個隨機數值
const int VRIn = A0;
const int button = 2;
const int gled = 10;
const int rled = 11;
const int yled = 12;
int slider,val_button,rand_number;
int key = 0;

void setup() {
  Serial.begin(9600);
  pinMode(VRIn, INPUT);
  pinMode(button, INPUT);
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
  pinMode(yled, OUTPUT);
  randomSeed(analogRead(VRIn));
}

void loop() {
  slider = analogRead(VRIn);
  val_button = digitalRead(button);

  if (slider <= 341){
    digitalWrite(rled,LOW);
    digitalWrite(gled,LOW);
    digitalWrite(yled,HIGH);

    rand_number = random(1,6);
    if (val_button == HIGH){
      key++;
      if (key == 1){
        //Serial.print(key);
        Serial.print(" D6 : ");
        Serial.println(rand_number);
      }
    }
    else{
      key = 0;
    } 
  }
  else if(slider >= 682){
    digitalWrite(rled,LOW);
    digitalWrite(gled,HIGH);
    digitalWrite(yled,LOW);

    rand_number = random(1,20);
    if (val_button == HIGH){
      key++;
      if (key == 1){
        Serial.print("D20 : ");
        Serial.println(rand_number);;
      }
    }
    else key = 0;
  }
  else{
    digitalWrite(rled,HIGH);
    digitalWrite(gled,LOW);
    digitalWrite(yled,LOW);

    rand_number = random(1,10);
    if (val_button == HIGH){
      key++;
      if (key == 1){
        Serial.print("D10 : ");
        Serial.println(rand_number);
      }
    }
    else key = 0;
  }
  delay(300);
}
