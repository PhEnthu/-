#include <Arduino.h>

int pin[6] = {A0, A1, A2, A3, A4, A5};

void setup() {
  for(int i = 0; i < 6; i++){
    pinMode(pin[i],OUTPUT);
  }
}

int i = 0;
void loop() {
  digitalWrite(pin[i],HIGH);
  delay(500);
  digitalWrite(pin[i],LOW);
  i++;
  if(i == 6){
    i = 0;
  }
}
