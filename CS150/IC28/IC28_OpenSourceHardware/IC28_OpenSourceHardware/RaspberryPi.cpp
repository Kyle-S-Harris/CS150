/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #28
 * LAST MODIFIED: 12/06/18
 *****************************************************/

#include "RaspberryPi.h"

RaspberryPi::RaspberryPi() : OpenSourceHardware()
{
    m_os = "";
}

RaspberryPi::RaspberryPi(string model, double power, double price, string os)
{
	m_model = model;
	m_power = power;
	m_price = price;
	m_os = os;
}

bool RaspberryPi::operator==(const RaspberryPi& other)
{
	return
		OpenSourceHardware::operator==(other) &&
		m_os == other.m_os;
}

ostream& operator<<(ostream& os, const RaspberryPi& rp)
{
	os << "RaspberryPi [Model=" << rp.m_model
		<< ", Power=" << rp.m_power << "V"
		<< ", Price=$" << rp.m_price
		<< ", Operating System=" << rp.m_os
		<< "]";

	return os;
}

