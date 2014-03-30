int myPins[] = {2,3,4};           // set pin array to pins 2 through 4

void setup()
{
	
	
	for (int thisPin = 0; thisPin < (sizeof(myPins)/sizeof(int)); thisPin++)
	{
		pinMode(myPins[thisPin],OUTPUT); // set each pin in the array to OUTPUT mode
	} 
}

void loop()
{
	for (int thisPin = 0; thisPin < (sizeof(myPins)/sizeof(int)); thisPin++)	// loop every pin and switch ON & OFF
	{
		digitalWrite(myPins[thisPin], HIGH);	// set led ON
		delay(100);				// keep it ON for 100ms 
		digitalWrite(myPins[thisPin], LOW);	// set led OFF for 50ms & then goto next one
		delay(50);
	}
}

