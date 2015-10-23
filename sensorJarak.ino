const int pingPin = 7;
const int pingPin2 = 6;
void setup() {

Serial.begin(9600);
}
void loop()
{
    // establish variables for duration of the ping, 
    // and the distance result in inches and centimeters:
    long duration, inches, cm;

    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(pingPin, LOW);

    pinMode(pingPin2, INPUT);
    duration = pulseIn(pingPin2, HIGH);
    // convert the time into a distance
    inches = microsecondsToInches(duration);
    cm = microsecondsToCentimeters(duration);
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    delay(100);
		}
    long microsecondsToInches(long microseconds)
	{

	return microseconds / 74 / 2;
	}
	long microsecondsToCentimeters(long microseconds)
	{
return microseconds / 29 / 2;
}
