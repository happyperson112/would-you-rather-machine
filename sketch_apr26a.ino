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
  
//spower();
//slime();
//work();
//timeTravel();
//soda();
//control();
//day();
//feot();
//funny();

}

void spower(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print("  Teleport");
  lcd.setCursor(1, 2);
  lcd.print("  Anywhere");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("Or Read Minds");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print("  WHERE am I!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print("  What Am I ");
lcd.setCursor(1, 2);
lcd.print("  THINKING!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void slime(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print("Have Slime Hands");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("Or Slime Feet");
  delay(5000);
  lcd.clear();
  
 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print("  Need A HAND!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print("  The Floor is");
lcd.setCursor(1, 2);
lcd.print("  SLIPPERY!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void work(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print("  Work All");
  lcd.setCursor(1, 2);
  lcd.print("   Day");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("Or Work All");
  lcd.setCursor(1, 2);
  lcd.print("   Night");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print(" What About The");
lcd.setCursor(1, 2);
lcd.print(" KIDS!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print(" Bet You Are ");
lcd.setCursor(1, 2);
lcd.print("  TIRED!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void timeTravel(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print(" Go Into The");
  lcd.setCursor(1, 2);
  lcd.print("  FUTURE");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("Or Go Into The");
  lcd.setCursor(1, 2);
  lcd.print("  PAST");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print(" Are THERE still");
lcd.setCursor(1, 2);
lcd.print(" Schools!?!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print(" GREAT SCOTT!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void soda(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print(" Only Drink");
  lcd.setCursor(1, 2);
  lcd.print("  Soda");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("Or Never");
  lcd.setCursor(1, 2);
  lcd.print("  Drink Soda");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print(" That Is Too ");
lcd.setCursor(1, 2);
lcd.print(" Much SUGAR!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print(" You Just Made");
lcd.setCursor(1, 2);
lcd.print("A Good CHOICE");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void control(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print(" Control Space");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print(" Or Time");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print("WHERE'S Earth!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print("Wish We Could Tu");
lcd.setCursor(1, 2);
lcd.print("rn Back TIME!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void day(){

while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print("  Stand All Day");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print(" Or Sit All Day");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print(" Do Your LEGS");
lcd.setCursor(1, 2);
lcd.print("   Ache!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print("That Is Going To");
lcd.setCursor(1, 2);
lcd.print("HURT Tommorow");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void third(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print(" Have A Third Eye");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("  Or Third Arm");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print(" Which Eye Do");
lcd.setCursor(1, 2);
lcd.print(" I LOOK At!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print(" Give Me A HAND!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void feot(){

  while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
  
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print(" Be 1 Foot Tall");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print(" Or 10 Feet Tall");
  delay(5000);
  lcd.clear();

 buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}
}

if (buttonA == 1){

lcd.clear();
lcd.print(" Watch OUT!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print("Go in The NBA!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}

void funny(){

while(buttonA == 0 && buttonB == 0) { 
  Serial.println(buttonB);
  Serial.println(buttonA);
  buttonA = digitalRead(3);
  buttonB = digitalRead(5);
  lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

  lcd.clear();
lcd.print("   Would You");
lcd.setCursor(3, 2);
lcd.print("  Rather");
  delay(5000);
  lcd.clear();
  delay(1000);
  lcd.print("1. Be The");
    lcd.setCursor(1, 2);
lcd.print("  Smartest");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Be The");
  lcd.setCursor(1, 2);
lcd.print("  Funniest");
  delay(5000);
  lcd.clear();

  buttonA = digitalRead(3);
  buttonB = digitalRead(5);

while(buttonA == 0 && buttonB == 0) { 
Serial.println(buttonB);
Serial.println(buttonA);
buttonA = digitalRead(3);
buttonB = digitalRead(5);
lcd.setCursor(0, 0);
   lcd.print("Please Press a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print("   E = mc2!!!");
delay(8000);
lcd.clear();
}

else {

lcd.clear();
lcd.print("Egg Puns CRACK");
lcd.setCursor(1, 2);
lcd.print("   Me Up!!!");
delay(8000);
lcd.clear();

}
lcd.clear();
}
