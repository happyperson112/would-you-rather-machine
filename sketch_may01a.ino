int buttonA;

int buttonB;

const int rs = 6, en = 7, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
#include <LiquidCrystal.h>
LiquidCrystal  lcd(rs, en, d4, d5, d6, d7);



void setup() {

  lcd.begin(16, 2);
  lcd.print("Would You Rather");
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.print("Eat 3 Hamburgers");
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.print("Or 3 Hot dogs");
  delay(1000);
  lcd.clear();

  pinMode(3, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);

}

void loop() {

 lcd.setCursor(0,1);

buttonB = digitalRead(5);
Serial.println(buttonB);
 
buttonA = digitalRead(3);
Serial.println(buttonA);
 

if (buttonA == 1){
  
  lcd.print("Meow I'm ");
  delay(1000);
  lcd.clear();
  
  }

else (buttonB == 1);
{
  
  lcd.print("A Cow!");
  delay(1000);
  lcd.clear();


}
}
