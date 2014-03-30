enum leds {
  dotLed,
  dashLed,
  wordLed
};

// the pins have been setup in an array
int ledPins[] = {2,3,4};
int pulseInterval = 200;

void setup()
{
  //intiliaze the pins to OUTPUT mode
  for(byte thisPin = 0; thisPin < (sizeof(ledPins)/sizeof(int)); thisPin++)
    pinMode(ledPins[thisPin],OUTPUT);
}

void loop()
{
  //
  for(int i=1;i<=3;i++)
    dot();
  delay(400);
  for(int i=1;i<=3;i++)
    dash();
  delay(400);
  for(int i=1;i<=3;i++)
    dot();
  digitalWrite(ledPins[wordLed],HIGH);
  delay(1200);
  digitalWrite(ledPins[wordLed],LOW);
}

void dot()
{
  // short blink of 1 time unit (200ms) on the dot led
  int dotInterval = 200;
  
  digitalWrite(ledPins[dotLed],HIGH);
  delay(dotInterval);
  digitalWrite(ledPins[dotLed],LOW);
  delay(pulseInterval);
}

void dash()
{
  // longer blink of 3 time units (600ms) on the dash led
  int dashInterval = 600;
  
  digitalWrite(ledPins[dashLed],HIGH);
  delay(dashInterval);
  digitalWrite(ledPins[dashLed],LOW);
  delay(pulseInterval);
}


