/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #25
* LAST MODIFIED: 11/27/18
*****************************************************/
/*****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * "Surfboard.h": Contains characteristics of a surfboard
 *
 * <iostream>: header that defines input/output streams.
 *****************************************************************************/


#ifndef SURFBOARDLIST_H
#define SURFBOARDLIST_H
#include "Surfboard.h"
#include <iostream>


class SurfboardList
{
    private:
        int m_count;
        const static int SIZE = 100;
        Surfboard m_list[SIZE];
    
    public:
        SurfboardList() { m_count = 0; }
        bool addBoard(Surfboard sb);
        bool removeBoard(int id);
        //Added to determine if SurfboardList is empty or not
        inline int getCount() const { return m_count; }
    
        friend ostream& operator<<(ostream& os, const SurfboardList& sb);
    
    
};


#endif /* SURFBOARDLIST_H */
