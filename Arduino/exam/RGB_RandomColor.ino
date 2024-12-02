const int RLed = 6;
const int GLed = 9;
const int BLed = 5;
long random;

void setup(){
  Serial.begin(9600);
  pinMode(RLed,OUTPUT);
  pinMode(GLed,OUTPUT);
  pinMode(BLed,OUTPUT);
  randomSeed(analogRead(A0));
}

void loop(){
  random = rand(0,255)
  Serial.print("R = ");
  Serial.print(random);
  Serial.print("\t");

  random = rand(0,255)
  Serial.print("G = ");
  Serial.print(random);
  Serial.print("\t");

  random = rand(0,255)
  Serial.print("B = ");
  Serial.print(random);
  Serial.print("\n");

  delay(500);

}
