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

  x = analogRead(0);
  lcd.setCursor(0,0);

//Creating the sum, depending on the button pressed
  if (x < 60){
    lcd.clear();
    a1 = rand() % 250 + 0;
    a2 = rand() % 250 + 0;
    lcd.print(a1);
    lcd.print(" + ");
    lcd.print(a2);
    delay(4000);
    lcd.setCursor(0,1);
    lcd.print("Ans: ");
    a3 = a1 + a2;
    lcd.print(a3);
    delay(2000);
    lcd.clear();
  }
  else if (x < 200){
    lcd.clear();
    a1 = rand() % 250 + 0;
    a2 = rand() % 250 + 0;
    lcd.print(a1);
    lcd.print(" - ");
    lcd.print(a2);
    delay(5000);
    lcd.setCursor(0,1);
    lcd.print("Ans: ");
    a3 = a1 - a2;
    lcd.print(a3);
    delay(2000);
    lcd.clear();
  }
  else if (x < 400){
    lcd.clear();
    a1 = rand() % 30 + 0;
    a2 = rand() % 30 + 0;
    lcd.print(a1);
    lcd.print(" x ");
    lcd.print(a2);
    delay(8000);
    lcd.setCursor(0,1);
    lcd.print("Ans: ");
    a3 = a1*a2;
    lcd.print(a3);
    delay(2000);
    lcd.clear();
  }
  else if (x < 600){
    lcd.clear();
    a1 = rand() % 150 + 0;
    a2 = (rand() % 10 + 0);
    a2 = a2*a1;
    lcd.print(a2);
    lcd.print(" / ");
    lcd.print(a1);
    delay(8000);
    lcd.setCursor(0,1);
    lcd.print("Ans: ");
    lcd.print(a2/a1);
    delay(2000);
    lcd.clear();
  }


  if (800< x ){
    lcd.print("Hello, R(+),D(x)");
    lcd.setCursor(0,1);
    lcd.print("L(/),U(-)");
  }
}
