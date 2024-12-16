const int LED_G = 10;
char c = ' ';
int time;

void setup(){
  Serial.begin(9600);
  pinMode(LED_G, OUTPUT);
}

void loop(){

  digitalWrite(LED_G,HIGH);
  delay(time);
  digitalWrite(LED_G,LOW);
  delay(time);

  if (Serial.available() > 0){
    c = Serial.read();

    if (c == '0'){
      time = 0 * 100;
    }
    else if(c == '1'){
      time = 1* 100;
    }
    else if(c == '2'){
      time = 2* 100;
    }
    else if(c == '3'){
      time = 3* 100;
    }
    else if(c == '4'){
      time = 4* 100;
    }
    else if(c == '5'){
      time = 5* 100;
    }
    else if(c == '6'){
      time = 6* 100;
    }
    else if(c == '7'){
      time = 7* 100;
    }
    else if(c == '8'){
      time = 8* 100;
    }
    else if(c == '9'){
      time = 9* 100;
    }
  }
}
