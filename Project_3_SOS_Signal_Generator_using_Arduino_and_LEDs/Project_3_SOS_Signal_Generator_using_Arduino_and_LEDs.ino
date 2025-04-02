#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Use 0x3F if 0x27 doesn't work



int pin = 7;

int s_active = 250;
int s_sleep = 250;

int o_active = 750;
int o_sleep = 750;

int reset = 2000;


void setup()
{
  pinMode(pin, OUTPUT);
  lcd.init();      // Initialize LCD
  lcd.backlight(); // Turn on backlight
  lcd.clear(); // Clear any initial garbage

  // lcd.setCursor(0, 0);
  // lcd.print("SOS Signal");
  // lcd.setCursor(0, 1);
  // lcd.print("Generator");
  // delay(2000); // Display for 2 seconds
  // lcd.clear();
}

void loop() {

  lcd.setCursor(0, 0);
  lcd.print("SOS Morse Code");
  delay(1000);
  lcd.clear();

  // S
  digitalWrite(pin, HIGH);
  lcd.setCursor(0, 0);
  lcd.print(".");
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  digitalWrite(pin, HIGH);
  lcd.setCursor(1, 0);
  lcd.print(".");
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  digitalWrite(pin, HIGH);
  lcd.setCursor(2, 0);
  lcd.print(".");
  delay(s_active);
  digitalWrite(pin, LOW);
  lcd.clear();
  delay(s_sleep);


  // O
  digitalWrite(pin, HIGH);
  lcd.setCursor(0, 0);
  lcd.print("-");
  delay(o_active);
  digitalWrite(pin, LOW);
  delay(o_sleep);
  
  digitalWrite(pin, HIGH);
  lcd.setCursor(2, 0);
  lcd.print("-");
  delay(o_active);
  digitalWrite(pin, LOW);
  delay(o_sleep);

  digitalWrite(pin, HIGH);
  lcd.setCursor(4, 0);
  lcd.print("-");
  delay(o_active);
  digitalWrite(pin, LOW);
  lcd.clear();
  delay(o_sleep);

  // S

  digitalWrite(pin, HIGH);
  lcd.setCursor(0, 0);
  lcd.print(".");
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  digitalWrite(pin, HIGH);
  lcd.setCursor(1, 0);
  lcd.print(".");
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  digitalWrite(pin, HIGH);
  lcd.setCursor(2, 0);
  lcd.print(".");
  delay(s_active);
  digitalWrite(pin, LOW);
  lcd.clear();
  delay(s_sleep);

  
  delay(reset);
  lcd.clear();
}

