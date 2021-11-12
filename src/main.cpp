#include "WProgram.h"

extern "C" int main(void)
{
    Serial.begin(9600);


	pinMode(13, OUTPUT); // teensy LED

	pinMode(1, OUTPUT); // DBIN
	pinMode(2, OUTPUT); // AMC
	pinMode(3, OUTPUT); // AMA
	pinMode(4, OUTPUT); // AMB
	pinMode(5, OUTPUT); // A1
	pinMode(6, OUTPUT); // A0
	pinMode(7, OUTPUT); // A3
	pinMode(8, OUTPUT); // A2
	pinMode(9, OUTPUT); // A5
	pinMode(10, OUTPUT); // A4
	pinMode(11, OUTPUT); // A15

    pinMode(37, OUTPUT); // PAL13 NC?
	pinMode(38, OUTPUT); // READY
	pinMode(39, INPUT); // READYA
	pinMode(14, INPUT); // RDBENA
	pinMode(15, INPUT); // LDBENA
	pinMode(16, INPUT); // S_A15
	pinMode(17, INPUT); // S_A5
	pinMode(18, INPUT); // DBDIR
	pinMode(19, INPUT); // SBE
	pinMode(20, INPUT); // LED
	pinMode(21, OUTPUT); // MEMEN


    for(int i=1; i<=11; i++) {
		digitalWriteFast(i, LOW);
	}
	for (int i=37; i<=39; i++) {
		digitalWriteFast(i, LOW);
	}
	for (int i=14; i<=21; i++) {
		digitalWriteFast(i, LOW);
	}

	Serial.println("Ready.");

	while (1) {

		digitalWriteFast(13, HIGH);
		delay(500);
		digitalWriteFast(13, LOW);
		delay(500);
		Serial.println("blink");
	}
}

