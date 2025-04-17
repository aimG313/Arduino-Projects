
int pin_red = 3;
int pin_green = 5;
int pin_blue = 6;
int fadeAmount = 5; // Change in brightness per step
int delayTime = 20; // Delay between steps (in milliseconds)

void setup()
{
  pinMode(pin_red, OUTPUT);
  pinMode(pin_green, OUTPUT);
  pinMode(pin_blue, OUTPUT);
}

void fadeLED(int ledPin)
{
  // Fade in: gradually increase brightness
  for (int brightness = 0; brightness <= 255; brightness += fadeAmount)
  {
    analogWrite(ledPin, brightness);
    delay(delayTime);
  }

  // Fade out: gradually decrease brightness
  for (int brightness = 255; brightness >= 0; brightness -= fadeAmount)
  {
    analogWrite(ledPin, brightness);
    delay(delayTime);
  }

  // Ensure the LED is off before switching to the next
  analogWrite(ledPin, 0);
}

void loop()
{
  // Fade the red LED, then green, then blue
  fadeLED(pin_red);
  fadeLED(pin_green);
  fadeLED(pin_blue);
}
