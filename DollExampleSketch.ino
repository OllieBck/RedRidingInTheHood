//#include "Keyboard.h"
//#include "HID.h"


const int doll = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
int dollValue = analogRead(doll);
if (dollValue >= 800 && dollValue <= 980) {
  Keyboard.print("A");
  delay(10000);
}

else if (dollValue >= 1000 && dollValue <= 1020) { 
  Keyboard.print("B");
  delay(10000);
}

else {
}
}

