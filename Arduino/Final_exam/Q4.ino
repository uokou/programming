const int R_LED = 11;
const int LDR = A1;
int LDR_value, brightness;

void setup(){
  pinMode(LDR,INPUT);
  pinMode(R_LED,OUTPUT);
}

void loop(){
  LDR_value = analogRead(LDR);
  brightness = map(LDR_value, 0, 1023, 255, 0);

  analogWrite(R_LED, brightness);

}
