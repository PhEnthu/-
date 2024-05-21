#include <Arduino.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(3, 5, 10, 11, 12, 13);

void setup() {
	lcd.begin(16, 2);//设置LCD要显示的列数、行数，即2行16列
}
	


void loop() {
	
	lcd.setCursor(0, 0);
	lcd.print("hello,world");
	lcd.setCursor(0, 1);
	lcd.print("sxw");

}
