/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #28
 * LAST MODIFIED: 12/06/18
 *****************************************************/

#include "Arduino.h"
#include "RaspberryPi.h"

#include <iostream>
#include <cstdlib>

using namespace std;

const int SIZE = 2;

int main(int argv, char* argc[])
{

	Arduino arduinoList[SIZE];
	RaspberryPi piList[SIZE];

	arduinoList[0] = Arduino("UNO Rev 3", 6, 22, "ATmega328P");
	arduinoList[1] = Arduino("MKR Vidor 4000", 3.3, 60, "Arm Cortex-M0");
	
	piList[0] = RaspberryPi("3 Model B+", 5, 34.99, "Raspbian");
	piList[1] = RaspberryPi("3 Model A", 5, 22.99, "Moebius");

	cout << "~~~List of Arduinos~~~\n" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << arduinoList[i] << endl;

	cout << "\n~~~List of Raspberry Pis~~~\n" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << piList[i] << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
