/*
以光敏電阻感測周遭環境之光亮度，並隨之控制LED亮度
周遭環境愈亮，LED愈亮; 環境愈暗，LED愈暗
*/

const int LDR = A1; //A1 LDR類比腳位
const int LED = 10; //PWM D10 LED腳位
int ldrval = 0; //LDR值
int ledval = 0; //LED值

void setup(){
  Serial.begin(9600);
  pinMode(LDR,INPUT);
  pinMode(LED,OUTPUT);
}

void loop(){
  ldrval = analogRead(LDR); //讀取A1 LDR的值
  Serial.print("LDR = ");
  Serial.print(ldrval);
  Serial.print("\t");
  
  ledval = map(ldrval,0,1023,0,255); //轉換為PWM的值
  Serial.print("LED = ");
  Serial.println(ledval);
  analogWrite(LED,ledval); //將PWM值送去控制LED
  delay(500);
}
