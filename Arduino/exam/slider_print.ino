const int VRIn=A0;
int A0_value = 0;

void setup() {
   Serial.begin(9600);
   pinMode(VRIn, INPUT);
}

void loop() {
  A0_value = analogRead(VRIn); // read analog value of A0 pin & store in a0.
	delay(500);
	Serial.print("A0 value = "); // show the analog value to PC.
	Serial.println(A0_value, DEC); // show the analog value (decimal) to PC.
	delay(500);
}
