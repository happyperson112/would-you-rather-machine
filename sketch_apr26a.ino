const int rs = 5, en = 7, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
#include <LiquidCrystal.h>
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup () {

  lcd.begin(16, 2);
  lcd.print("Hi Meow Im A Cow");
}

void loop () {

lcd.setCursor(0, 1);

}
