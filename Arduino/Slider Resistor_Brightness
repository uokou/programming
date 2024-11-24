const int gled = 10;
const int VRIn = A0;
int brightness, Slider;

void setup(){
  pinMode(gled,OUTPUT);
  pinMode(VRIn,INPUT);
  Serial.begin(9600);
}

void loop(){
  Slider = analogRead(VRIn);
  brightness = map(Slider,0,1023,0,255);
  analogWrite(gled,brightness);

  Serial.print(Light,DEC);
  Serial.print("\t");
  Serial.println(brightness,DEC);
}
