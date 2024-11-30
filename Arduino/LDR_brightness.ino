const int LDR = A1;
const int LED = 10;
int ldrval = 0;
int ledval = 0;

void setup(){
  Serial.begin(9600);
  pinMode(LDR,INPUT);
  pinMode(LED,OUTPUT);
}

void loop(){
  ldrval = analogRead(LDR);
  Serial.print("LDR = ");
  Serial.print(ldrval);
  Serial.print("\t");
  
  ledval = map(ldrval,0,1023,0,255);
  Serial.print("LED = ");
  Serial.println(ledval);
  analogWrite(LED,ledval);
  delay(500);
}
