//按鈕按下時，點亮紅色LED

const int Button_InPin = 2:
const int Ledred_OutPin = 11;

// variables will change;
int buttonState = 0; // variable for pushbutton status

void setup {
pinMode(Ledred_OutPin, OUTPUT);
pinMode(Button_InPin, INPUT);
}

void loop {
buttonState = digitalRead(Button_InPin);
// check if the pushbutton is pressed.
/ if it is, the buttonState is HIGH:

if (buttonState == HIGH) {
digitalWrite(Ledred _OutPin, HIGH);
else 
// turn LED off:
digitalWrite(Ledred_OutPin, LOW);
// wait 10 milliseconds before the next loop
// after the last reading:
delay(10);
｝