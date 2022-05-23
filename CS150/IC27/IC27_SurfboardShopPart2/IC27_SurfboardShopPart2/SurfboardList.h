/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #27
 * LAST MODIFIED: 11/27/18
 *****************************************************/


#ifndef SURFBOARDLIST_H
#define SURFBOARDLIST_H

#include "Surfboard.h"
class SurfboardList
{
private:
	const static int SIZE = 100;
	int m_count;
	Surfboard m_list[SIZE];

public:
    SurfboardList() { m_count = 0; }
	bool addBoard(Surfboard s);
	bool removeBoard(int id);
    bool updateBoard(int id, string brand, string model, double length, double width, double thickness, int quantity, double price);

	friend ostream& operator<<(ostream& os, const SurfboardList& sl);
};

#endif
