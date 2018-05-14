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
  spower();
   slime();
}

void spower(){

lcd.print("Would You Rather");
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.print("Teleport Anywhere");
  delay(1000);
 lcd.clear();
  delay(1000);
  lcd.print("Or Read Minds");
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

if (buttonA == 1){

lcd.clear();
lcd.print("SEE You Soon!!!");
delay(5000);
lcd.clear();
}

else {

lcd.clear();
lcd.print("What Am I THINKING!!!");
delay(5000);
lcd.clear();

}
lcd.clear();
}

void slime(){

lcd.print("Would You Rather");
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.print("Have Slime Hands");
  delay(1000);
 lcd.clear();
  delay(1000);
  lcd.print("Or Slime Feet");
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

if (buttonA == 1){

lcd.clear();
lcd.print("Need A HAND!!!");
delay(5000);
lcd.clear();
}

else {

lcd.clear();

lcd.print("The Floors SLIPPERY!!!");
delay(5000);
lcd.clear();

}
lcd.clear();
}
