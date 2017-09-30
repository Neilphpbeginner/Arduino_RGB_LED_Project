#include "Arduino.h"
String array1[3];
byte myByte[12];
int redLed				=	12;
int greenLed			=	11;
int blueLed				=	10;
int redCurrentColor;
int greenCurrentColor;
int blueCurrentColor;

void setup()
{
		Serial.begin(9600);
		pinMode(redLed, OUTPUT);
		pinMode(greenLed, OUTPUT);
		pinMode(blueLed, OUTPUT);

}

void loop(){

//if (Serial.available() >= 3) {
//    for ( int i = 0; i < 3; i++){
//    	array1[i] = Serial.readString();
//
//  }
//    	redCurrentColor	=	array1[0].toInt();
//    	greenCurrentColor	=	array1[1].toInt();
//    	blueCurrentColor	=	array1[2].toInt();
//    	analogWrite(redLed, redCurrentColor);
//    	analogWrite(greenLed, greenCurrentColor);
//    	analogWrite(blueLed, blueCurrentColor);
//
//}

	digitalWrite(redLed, HIGH);
	digitalWrite(greenLed, HIGH);
	digitalWrite(blueLed, HIGH);


}


