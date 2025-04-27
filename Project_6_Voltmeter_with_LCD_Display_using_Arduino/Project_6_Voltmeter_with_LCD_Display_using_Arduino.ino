#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // 0x27 or 0x3F

const int pwmPin = 9;    // PWM output
const int sensePin = A0; // analog input

// === user-adjustable desired voltage (0.0 to 5.0 V) ===
float intensity = 5.0;

// Delay between readings (ms)
const unsigned long DELAY_MS = 1000;

void setup()
{
  // init LCD
  lcd.init();
  lcd.backlight();
  lcd.clear();

  // pin directions
  pinMode(pwmPin, OUTPUT);
  

  Serial.begin(115200);
}

void loop()
{
  // --- 1) Drive PWM to get desired voltage ---
  // PWM range is 0–255, corresponding to 0–5 V (approx)
  int pwmValue = (int)constrain((intensity / 5.0) * 255.0, 0, 255);
  analogWrite(pwmPin, pwmValue);

  // --- 2) Read back the voltage ---
  int raw = analogRead(sensePin);         // 0–1023
  float measuredV = raw * (5.0 / 1023.0); // convert to volts

  // --- 3) Print to Serial ---
  Serial.print("Supplied Voltage: ");
  Serial.print(intensity, 2);
  Serial.print(" V  |  Measured: ");
  Serial.print(measuredV, 2);
  Serial.println(" V");

  // --- 4) Display on LCD ---
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Supplied  :");
  lcd.print(intensity, 2);
  lcd.print("V");

  lcd.setCursor(0, 1);
  lcd.print("Measured  :");
  lcd.print(measuredV, 2);
  lcd.print("V");

  delay(DELAY_MS);
}
