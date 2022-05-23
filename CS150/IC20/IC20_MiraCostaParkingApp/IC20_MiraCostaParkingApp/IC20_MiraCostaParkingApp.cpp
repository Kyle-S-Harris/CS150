/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #20
 * LAST MODIFIED: 11/13/18
 *****************************************************/
/*****************************************************************************
 * MiraCostaParkingApp
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that keeps track of all the cars parked in MiraCosta's "Mordor Lot"
 *****************************************************************************
 * ALGORITHM:
 * 1. Create an array of Vehicle that stores 7 rows and 20 columns of parking spaces
 * 2. Using a loop and a nested loop, fill every space of each row and column of the parking lot with a
 * Vehicle with a random pass number, year, and make.
 * 3. Output Vehicle information for all spaces
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *
 * <iomanip>: used to modify output.
 *****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

enum AutoType
{
    BMW, Chevrolet, Ford, Kia, Mercedes, Tesla, Toyota
};

struct Vehicle
{
    int passNumber;
    AutoType make;
    int year;
};

std::string convertTypeToString(AutoType type);

const int ROWS = 7;
const int COLUMNS = 20;

int main(int argc, char * argv[])
{
    std::cout << "**************************************************\n"
              << "                MIRACOSTA COLLEGE                 \n"
              << "              OC-5A PARKING LOT APP               \n"
              << "**************************************************\n"
              << "SPACE #        PASS #         MAKE           YEAR \n"
              << "**************************************************\n";
    
    Vehicle mordorLot[ROWS][COLUMNS];
    
    srand(time(NULL));
    
    int spaceNumber = 1;
    for(int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            mordorLot[i][j].passNumber = (rand() % 9000) + 1000;
            mordorLot[i][j].make = static_cast<AutoType>((rand() % Toyota - BMW));
            mordorLot[i][j].year = (rand() % 134 + 1885);
            
            std::cout << std::left
            << std::setw(15) << spaceNumber++
            << std::setw(15) << mordorLot[i][j].passNumber
            << std::setw(15) << convertTypeToString(mordorLot[i][j].make)
            << std::setw(15) << mordorLot[i][j].year
            << std::endl;
            
            //spaceNumber++;
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}

std::string convertTypeToString(AutoType type)
{
    switch (type)
    {
        case BMW:
            return "BMW";
        case Chevrolet:
            return "Chevrolet";
        case Ford:
            return "Ford";
        case Kia:
            return "Kia";
        case Mercedes:
            return "Mercedes";
        case Tesla:
            return "Tesla";
        case Toyota:
            return "Toyota";
        default:
            return "Clunker";
    }
}
