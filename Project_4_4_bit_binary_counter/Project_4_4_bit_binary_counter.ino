#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Use 0x3F if 0x27 doesn't work

int pin_7 = 7;
int pin_6 = 6;
int pin_5 = 5;
int pin_4 = 4;

int del = 2000;

void setup()
{
  lcd.init();      // Initialize LCD
  lcd.backlight(); // Turn on backlight
  lcd.clear();     // Clear any initial garbage

  // Print the header on the first line, which will remain constant.
  lcd.setCursor(0, 0);
  lcd.print("4 bit Counter:");

  pinMode(pin_4, OUTPUT);
  pinMode(pin_5, OUTPUT);
  pinMode(pin_6, OUTPUT);
  pinMode(pin_7, OUTPUT);
}

// Clears only the second row of the LCD (16 characters).
void clearSecondLine()
{
  lcd.setCursor(0, 1);
  lcd.print("                "); // 16 spaces to clear the row
}

void loop()
{
  // 0 = 0000
  lcd.setCursor(0, 1);
  lcd.print("0 = 0000");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();

  // 1 = 0001
  lcd.setCursor(0, 1);
  lcd.print("1 = 0001");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();

  // 2 = 0010
  lcd.setCursor(0, 1);
  lcd.print("2 = 0010");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();

  // 3 = 0011
  lcd.setCursor(0, 1);
  lcd.print("3 = 0011");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();

  // 4 = 0100
  lcd.setCursor(0, 1);
  lcd.print("4 = 0100");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();

  // 5 = 0101
  lcd.setCursor(0, 1);
  lcd.print("5 = 0101");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();

  // 6 = 0110
  lcd.setCursor(0, 1);
  lcd.print("6 = 0110");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();

  // 7 = 0111
  lcd.setCursor(0, 1);
  lcd.print("7 = 0111");
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();

  // 8 = 1000
  lcd.setCursor(0, 1);
  lcd.print("8 = 1000");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();

  // 9 = 1001
  lcd.setCursor(0, 1);
  lcd.print("9 = 1001");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();

  // 10 = 1010
  lcd.setCursor(0, 1);
  lcd.print("10 = 1010");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();

  // 11 = 1011
  lcd.setCursor(0, 1);
  lcd.print("11 = 1011");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, LOW);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();

  // 12 = 1100
  lcd.setCursor(0, 1);
  lcd.print("12 = 1100");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();

  // 13 = 1101
  lcd.setCursor(0, 1);
  lcd.print("13 = 1101");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, LOW);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();

  // 14 = 1110
  lcd.setCursor(0, 1);
  lcd.print("14 = 1110");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, LOW);
  delay(del);
  clearSecondLine();


  // 15 = 1111
  lcd.setCursor(0, 1);
  lcd.print("15 = 1111");
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_5, HIGH);
  digitalWrite(pin_4, HIGH);
  delay(del);
  clearSecondLine();
}
