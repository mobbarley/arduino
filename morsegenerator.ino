int ledPin = 13;
int pulseDelay = 200;
int spacerDelay = 600;
int wordDelay = 1400;

void setup()
{
	pinMode(ledPin,OUTPUT);
}

void loop()
{
	dot();
        dot();
        dot();
        delay(spacerDelay);
	dash();
	dash();
	dash();
	delay(spacerDelay);
	dot();
	dot();
	dot();
	delay(wordDelay);
	delay(6000);	
}

void dash()
{
	int dashInterval = 600;	

	digitalWrite(ledPin,HIGH);
	delay(dashInterval);
	digitalWrite(ledPin,LOW);
	delay(pulseDelay);
}

void dot()
{
	int dotInterval = 200;

	digitalWrite(ledPin,HIGH);
	delay(dotInterval);
	digitalWrite(ledPin,LOW);
	delay(pulseDelay);
}

