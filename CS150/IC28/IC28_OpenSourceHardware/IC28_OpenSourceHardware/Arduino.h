/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #28
 * LAST MODIFIED: 12/06/18
 *****************************************************/

#ifndef ARDUINO_H
#define ARDUINO_H

#include "OpenSourceHardware.h"
#include <string>
#include <iostream>

using namespace std;
//Inheritance in cpp
class Arduino : public OpenSourceHardware
{
private:
	string m_microcontroller;

	

public:
    Arduino();
	Arduino(string model, double power, double price, string microcontroller);

	inline string getMicrocontroller() const { return m_microcontroller; }

	inline void setMicrocontroller(string microcontroller) { m_microcontroller = microcontroller; }

	bool operator==(const Arduino& a);
	friend ostream& operator<<(ostream& os, const Arduino& a);

};

#endif
