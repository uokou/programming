const int VRIn = A0;
int value;

void setup(){
  Serial.begin(9600);
  pinMode(VRIn,INPUT);
}

void loop(){
  value = analogRead(VRIn);

  Serial.print("A0 value=");
  Serial.println(value);

  delay(500);
}
