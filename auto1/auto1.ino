#include<LiquidCrystal.h>
LiquidCrystal lcd(4, 6, 10, 11, 12, 13);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("HHHHHHHHHHHH");
  lcd.setCursor(0, 1);
  lcd.print("123456789012");

}
