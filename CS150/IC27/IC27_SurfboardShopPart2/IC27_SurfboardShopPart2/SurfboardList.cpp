/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #27
 * LAST MODIFIED: 11/27/18
 *****************************************************/

#include "SurfboardList.h"

bool SurfboardList::addBoard(Surfboard s)
{
	if (m_count >= SIZE - 1)
		return false;

	m_list[m_count++] = s;
	return true;
}

bool SurfboardList::removeBoard(int id)
{
	for (int i = 0; i < m_count; i++)
	{
		if (id == m_list[i].getId())
		{
			for (int j = i; j < m_count - 1; j++)
				m_list[j] = m_list[j + 1];
			m_count--;
			return true;
		}
	}
	return false;
}

bool SurfboardList::updateBoard(int id, string brand, string model, double length, double width, double thickness, int quantity, double price)
{
    //Loop through list to find id
    for(int i = 0; i < m_count; i++)
    {
        if(id == m_list[i].getId())
        {
            m_list[i].setBrand(brand);
            m_list[i].setModel(model);
            m_list[i].setLength(length);
            m_list[i].setWidth(width);
            m_list[i].setThickness(thickness);
            m_list[i].setQuantity(quantity);
            m_list[i].setPrice(price);
            return true;
            
        }
    }
    return false;
}


            

ostream& operator<<(ostream& os, const SurfboardList& sl)
{
	os << "\n~~~Current Inventory of Surfboards~~~\n\n";
	if (sl.m_count == 0)
		os << "[Empty :/]" << endl;
	else
		for (int i = 0; i < sl.m_count; i++)
			os << sl.m_list[i] << endl;
	return os;
}
