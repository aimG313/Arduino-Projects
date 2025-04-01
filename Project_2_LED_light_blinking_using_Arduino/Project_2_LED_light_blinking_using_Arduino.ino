int pin = 7;
int time_delay = 3;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);
  delay(time_delay * 1000);
  
  digitalWrite(pin, LOW);
  delay(time_delay * 1000);

}
