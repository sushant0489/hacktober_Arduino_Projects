//Very basic program for LCD interfacing using Arduino UNO.
// Program to just print words and sentences on LCD.

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  
  // set up the LCD's number of columns and rows:
  
  // count of rows and columns start from 0
  
  lcd.begin(16, 2); 
  // 16 rows(horizontal display) and 2 column (vertical display)
  lcd.setCursor(6,0); // row no = 6 and column no =0
  lcd.print("hey");
  lcd.setCursor(0,1); // row no = 0 and column no = 1
  lcd.print("Tech_Automate");
}

void loop() 
{
  
}
