byte c = '';
void setup(){
  Serial.begin(57600);
  pinMode(10,OUTPUT);
  
}

void loop(){
  if (Serial.available() > 0){
    c = Serial.read();
    
    if (c == '0'){
      digitalWrite(10,LOW);
    }
    else if (c == '1'){
      digitalWrite(10,HIGH);
    }
    else if (c == 's'){
      if (Serial.available() > 0){
        c = Serial.read();
      }
      analogWrite(10,c);
    }
    Serial.println(c,DEC);
    Serial.flush();
  }
  delay(100);
}
