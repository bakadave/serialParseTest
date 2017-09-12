

boolean stringReady = 0;
String inString;
int c;

void setup() {
	Serial.begin(115200);
}

void loop()
{
	while (Serial.available()) {
		c = Serial.read();
		if (c != '/n') {

		}
	}
}
