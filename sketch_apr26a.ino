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
work();
timeTravel();
soda();
control();
day();
third();
feot();
joke();

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
  lcd.print(" 1. Teleport");
  lcd.setCursor(1, 2);
  lcd.print(" Anywhere");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Read Minds");
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
   lcd.print("Please Choose a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print("WHERE Are You!!!");
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
  lcd.print(" 1. Have Slime");
  lcd.setCursor(1, 2);
lcd.print("   Hands");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Slime Feet");
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
   lcd.print("Please Choose a");
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
  lcd.print("1. Work All");
  lcd.setCursor(1, 2);
  lcd.print("   Day");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Work All");
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
   lcd.print("Please Choose a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print(" Sorry Disney's");
lcd.setCursor(1, 2);
lcd.print(" CLOSED!!!");
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
  lcd.print("1. Go Into The");
  lcd.setCursor(1, 2);
  lcd.print("  FUTURE");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Go Into The");
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
   lcd.print("Please Choose a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
}

if (buttonA == 1){

lcd.clear();
lcd.print(" Is THERE still");
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
  lcd.print("1. Only Drink");
  lcd.setCursor(1, 2);
  lcd.print("  Soda");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Never");
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
   lcd.print("Please Choose a");
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
  lcd.print("1. Control Space");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Control Time");
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
   lcd.print("Please Choose a");
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
  lcd.print("1. Stand All Day");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. Sit All Day");
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
   lcd.print("Please Choose a");
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
  lcd.print("1. Have A Third");
  lcd.setCursor(1, 2);
lcd.print("      Eye");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print(" 2. Third Arm");
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
   lcd.print("Please Choose a");
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
  lcd.print("1. Be 1 Foot");
  lcd.setCursor(1, 2);
lcd.print("   Tall");
  delay(5000);
 lcd.clear();
  delay(1000);
  lcd.print("2. 10 Feet Tall");
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
   lcd.print("Please Choose a");
lcd.setCursor(0, 1);
lcd.print("    Button");
lcd.setCursor(0, 1);
lcd.clear();
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

void joke(){

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
   lcd.print("Please hoose a");
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
