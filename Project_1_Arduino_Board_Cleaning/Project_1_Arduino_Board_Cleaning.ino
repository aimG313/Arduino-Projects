int pin = 13, d = 3000;
void setup()
{
  pinMode(pin, OUTPUT);
}

void loop() 
{
  digitalWrite(pin, HIGH);
  delay(d);
  digitalWrite(pin, LOW);
  delay(d);
}
