/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #05
* LAST MODIFIED: 09/13/18
*****************************************************/
/*****************************************************************************
* PizzaPi
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to calculate a pizza order
*****************************************************************************
* ALGORITHM:
* 1. Ask user for pizza diameter
* 2. Ask user for number of people attending
* 3. Calculate pizza radius and then total area
* 4. Calculate num slices per pizza, total num slices needed, and then the number of pizzas needed.
* 5. Output total slices in one pizza, average slices consumed, and number of pizzas needed.
*****************************************************************************
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* <cstdlib>: C Standard General Utilities Library to perform general operations
* such as math operations, memory management, searching, sorting, etc.
*
* <iostream>: header that defines input/output streams.
*
* <iomanip>: to modify input/output characteristics.
*
* <cmath>: used to perform special math functions.
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char * argv[])
{
    const double SLICE_AREA = 14.125;
    const double AVG_TAKEN = 2.5;
    
    int pizzaDiameter, numPeople;
    double numSlicesPerPizza, totalNumSlices, totalArea, radius, numPizzas;
    
    cout << "What is the diameter of the pizza (in inches): ";
    cin >> pizzaDiameter;
    
    cout << "How many people are attending the party: ";
    cin >> numPeople;
    
    radius = pizzaDiameter / 2;
    totalArea = M_PI * pow(radius, 2);
    
    numSlicesPerPizza = totalArea / SLICE_AREA;
    totalNumSlices = AVG_TAKEN * numPeople;
    numPizzas = totalNumSlices / numSlicesPerPizza;
    
    cout << fixed << setprecision(1) << "\nThe total slices in one pizza is: " << numSlicesPerPizza
    << "\nIf each of the " << numPeople << " people eats an average of "
    << AVG_TAKEN << setprecision(0) << " slices,\nyou will need to order " << numPizzas << " pizzas.\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
