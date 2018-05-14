int buttonA;

int buttonB;

const int rs = 6, en = 7, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
#include <LiquidCrystal.h>
LiquidCrystal  lcd(rs, en, d4, d5, d6, d7);

void setup() {

  pinMode(3, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
  lcd.setCursor(0,1);
  lcd.begin(16, 2);

}

void loop() {
  lcd.print("Would You Rather");
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.print("Eat Chez");
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.print("Or Cheese");
  delay(1000);
  lcd.clear();


lcd.print("Please Press a Button");

while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  delay(5);
}

if (buttonA == 1);{

lcd.clear();
lcd.print("Chez");
delay(5000);

}

else (buttonB == 1);{

lcd.clear();
lcd.print("Cheese");
delay(5000);

}
}
}
