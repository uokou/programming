int x;

void setup(){
  Serial.begin(9600);


  Serial.print("NO FORMAT\t");
  Serial.print("DEC\t");
  Serial.print("HEX\t");
  Serial.print("OCT\t");
  Serial.print("BIN\n");

  for(x = 0; x <= 63; x++){
    Serial.print(x);
    Serial.print("\t");
    Serial.print(x, DEC);
    Serial.print("\t");
    Serial.print(x, HEX);
    Serial.print("\t");
    Serial.print(x, OCT);
    Serial.print("\t");
    Serial.print(x, BIN);
    Serial.print("\n");
  }
  
}

void loop(){
  


}
