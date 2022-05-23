/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #28
 * LAST MODIFIED: 12/06/18
 *****************************************************/

#ifndef RASPBERRYPI_H
#define RASPBERRYPI_H

#include "OpenSourceHardware.h"
#include <string>
#include <iostream>

using namespace std;

class RaspberryPi : public OpenSourceHardware
{
private:
	string m_os;
	
public:
	RaspberryPi();
	RaspberryPi(string model, double power, double price, string os);
	
	inline string getOS() const { return m_os; }

    inline void setOS(string os) { m_os = os; }

	bool operator==(const RaspberryPi& other);
	friend ostream& operator<<(ostream& os, const RaspberryPi& rp);

};

#endif
