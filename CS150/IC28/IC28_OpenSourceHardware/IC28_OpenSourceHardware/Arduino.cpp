/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #28
 * LAST MODIFIED: 12/06/18
 *****************************************************/

#include "Arduino.h"

Arduino::Arduino() : OpenSourceHardware()
{
    m_microcontroller = "";
}

Arduino::Arduino(string model, double power, double price, string microcontroller) : OpenSourceHardware(model, power, price)
{
	m_model = model;
	m_power = power;
	m_price = price;
	m_microcontroller = microcontroller;
}

bool Arduino::operator==(const Arduino& other)
{
	return
        OpenSourceHardware::operator==(other) &&
		m_microcontroller == other.m_microcontroller;
}

ostream& operator<<(ostream& os, const Arduino& a)
{
	os << "Arduino [Model=" << a.m_model
		<< ", Power=" << a.m_power << "V"
		<< ", Price=$" << a.m_price
		<< ", Microcontroller=" << a.m_microcontroller
		<< "]";

	return os;
}

