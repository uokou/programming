const int RLed = 6;
const int GLed = 9;
const int BLed = 5;
long randomNumber;

void setup(){
  Serial.begin(9600);
  pinMode(RLed,OUTPUT);
  pinMode(GLed,OUTPUT);
  pinMode(BLed,OUTPUT);
  randomSeed(analogRead(A0));
}

void loop(){
  randomNumber = random(0,255);
  analogWrite(RLed,randomNumber);
  Serial.print("R = ");
  Serial.print(randomNumber);
  Serial.print("\t");

  randomNumber = random(0,255);
  analogWrite(GLed,randomNumber);
  Serial.print("G = ");
  Serial.print(randomNumber);
  Serial.print("\t");

  randomNumber = random(0,255);
  analogWrite(BLed,randomNumber);
  Serial.print("B = ");
  Serial.print(randomNumber);
  Serial.print("\n");

  delay(500);

}
