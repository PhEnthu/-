#include <Arduino.h>

int pin[6] = {A0, A1, A2, A3, A4, A5};

void setup() {
  for(int i = 0; i < 6; i++){
    pinMode(pin[i],OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
	char  var = Serial.read();
	if(var == '1'){
		digitalWrite(pin[0],HIGH);
		Serial.println("LED1亮");
	}
	else if(var == '2'){
		digitalWrite(pin[1],HIGH);
		Serial.println("LED2亮");
	}
}
