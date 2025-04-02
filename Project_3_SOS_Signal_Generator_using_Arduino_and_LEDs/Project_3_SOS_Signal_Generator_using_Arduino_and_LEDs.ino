int pin = 7;

int s_active = 250;
int s_sleep = 250;

int o_active = 750;
int o_sleep = 750;

int reset = 2000;


void setup()
{
  pinMode(pin, OUTPUT);
}

void loop() {

  // S
  digitalWrite(pin, HIGH);
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);
  
  digitalWrite(pin, HIGH);
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  digitalWrite(pin, HIGH);
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);


  // O
  digitalWrite(pin, HIGH);
  delay(o_active);
  digitalWrite(pin, LOW);
  delay(o_sleep);
  
  digitalWrite(pin, HIGH);
  delay(o_active);
  digitalWrite(pin, LOW);
  delay(o_sleep);

  digitalWrite(pin, HIGH);
  delay(o_active);
  digitalWrite(pin, LOW);
  delay(o_sleep);

  // S

  digitalWrite(pin, HIGH);
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  digitalWrite(pin, HIGH);
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  digitalWrite(pin, HIGH);
  delay(s_active);
  digitalWrite(pin, LOW);
  delay(s_sleep);

  delay(reset);
}
