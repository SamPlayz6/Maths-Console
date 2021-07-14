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
  int n;
  int a1;
  int a2;
  int a3;
  int t;
  
  n = 0;
  x = analogRead(0);
  lcd.setCursor(0,0);

  if (x == 735){
    lcd.print("Arcade Mode");
    delay(700);
    lcd.clear();
    lcd.print("Hello, R(+),D(x)");
    lcd.setCursor(0,1);
    lcd.print("L(/),U(-)");
    
    while(n == 0){
      x = analogRead(0);
      lcd.setCursor(0,0);
      
      if (x < 60){ 
        for (int i = 0; i <= 4; i +=2){
            t = 12;
            lcd.clear();
            a1 = rand() % 250 + 0;
            a2 = rand() % 250 + 0;
            lcd.print(a1);
            lcd.print(" + ");
            lcd.print(a2);
            lcd.setCursor(8,0);
            lcd.print("Time:");
            lcd.print(t-i);
            lcd.print("s");
            lcd.setCursor(8,1);
            lcd.print(" Stage:");
            lcd.print((i+2)/2);
            delay((t-i)*1000);
            lcd.setCursor(0,1);
            lcd.print("Ans:");
            a3 = a1+a2;
            lcd.print(a3);
            delay(2000);
            lcd.clear();
            n += 1;
        }
      
      }

      else if (x < 200){
        for (int i = 0; i <= 4; i +=2){
            t = 12;
            lcd.clear();
            a1 = rand() % 250 + 0;
            a2 = rand() % 250 + 0;
            lcd.print(a1);
            lcd.print(" - ");
            lcd.print(a2);
            lcd.setCursor(9,0);
            lcd.print("Time:");
            lcd.print(t-i);
            lcd.print("s");
            lcd.setCursor(8,1);
            lcd.print(" Stage:");
            lcd.print((i+2)/2);
            delay((t-i)*1000);
            lcd.setCursor(0,1);
            lcd.print("Ans:");
            a3 = a1-a2;
            lcd.print(a3);
            delay(2000);
            lcd.clear();
            n += 1;
        }
      }

      else if (x < 400){
        for (int i = 0; i <= 4; i +=3){
            t = 15;
            lcd.clear();
            a1 = rand() % 30 + 0;
            a2 = rand() % 30 + 0;
            lcd.print(a1);
            lcd.print(" x ");
            lcd.print(a2);
            lcd.setCursor(9,0);
            lcd.print("Time:");
            lcd.print(t-i);
            lcd.print("s");
            lcd.setCursor(8,1);
            lcd.print(" Stage:");
            lcd.print((i+3)/3);
            delay((t-i)*1000);
            lcd.setCursor(0,1);
            lcd.print("Ans:");
            a3 = a1*a2;
            lcd.print(a3);
            delay(2000);
            lcd.clear();
            n += 1;
        }
      }

      else if (x < 600){
        for (int i = 0; i <= 4; i +=3){
            t = 15;
            lcd.clear();
            a1 = rand() % 150 + 0;
            a2 = rand() % 10 + 0;
            a2 = a2*a1;
            lcd.print(a2);
            lcd.print(" / ");
            lcd.print(a1);
            lcd.setCursor(9,0);
            lcd.print("Time:");
            lcd.print(t-i);
            lcd.print("s");
            lcd.setCursor(8,1);
            lcd.print(" Stage:");
            lcd.print((i+3)/3);
            delay((t-i)*1000);
            lcd.setCursor(0,1);
            lcd.print("Ans:");
            lcd.print(a2/a1);
            delay(2000);
            lcd.clear();
            n += 1;
        }
      }
    }
  }
}
