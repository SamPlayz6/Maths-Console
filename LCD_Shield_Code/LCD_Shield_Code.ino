#include <LiquidCrystal.h>
#include <LCDKeypad.h>

#include <stdlib.h>
#include <time.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
 lcd.begin(16, 2);
 lcd.clear();
 lcd.setCursor(0,0);
 delay(1000);
} 

void loop() {
  Serial.begin(9600); 
  //Initalizing
  int x;
  int a1;
  int a2;
  int a3;
  int r;
  char set;

  x = analogRead(0);
  lcd.setCursor(0,0);
  Serial.print(x);

//Creating the sum, depending on the button pressed
  if (x < 60 && r == 0){
    r += 1;
    set = 'a';
    a1 = rand() % 250 + 0;
    a2 = rand() % 250 + 0;
    lcd.print(a1);
    lcd.print(" + ");
    lcd.print(a2);
  }
  else if (x < 200 && r == 0){
    r += 1;
    set = 's';
    a1 = rand() % 250 + 0;
    a2 = rand() % 250 + 0;
    lcd.print(a1);
    lcd.print(" - ");
    lcd.print(a2);
  }
  else if (x < 400 && r == 0){
    r += 1;
    set = 'm';
    a1 = rand() % 30 + 0;
    a2 = rand() % 30 + 0;
    lcd.print(a1);
    lcd.print(" x ");
    lcd.print(a2);
  }
  else if (x < 600 && r == 0){
    r += 1;
    set = 'd';
    a1 = rand() % 300 + 0;
    a2 = (rand() % 20 + 0)*a1;
    lcd.print(a2);
    lcd.print(" / ");
    lcd.print(a1);
  }

//Showing the answer when Select button is pressed
  if (600 < x < 800 && set == 'a'){
    lcd.setCursor(0,1);
    a3 = a1 + a2;
    lcd.print("Ans: ");
    lcd.print(a3);
    //delay(500);
    set = 'r';
    lcd.clear();
    r = 0;
  }
  else if(600 < x < 800 && set == 's'){
    lcd.setCursor(0,1);
    a3 = a1 - a2;
    lcd.print("Ans: ");
    lcd.print(a3);  
   //delay(500);
    set = 'r';
    lcd.clear();
    r = 0;
  }
  else if(600 < x < 800 && set == 'm'){
    lcd.setCursor(0,1);
    a3 = a1*a2;
    lcd.print("Ans: ");
    lcd.print(a3);
    //delay(500);
    set = 'r';
    lcd.clear();
    r = 0;
  }
  else if(600 < x < 800 && set == 'd'){
    lcd.setCursor(0,1);
    lcd.print("Ans: ");
    lcd.print(a2);
    //delay(500);
    set = 'r';
    lcd.clear();
    r = 0;
  }

  if (800< x ){
    lcd.print("GellW");}
}
