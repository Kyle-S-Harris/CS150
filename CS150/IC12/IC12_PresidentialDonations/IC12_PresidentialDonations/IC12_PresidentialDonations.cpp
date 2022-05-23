/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #12
* LAST MODIFIED: 10/04/18
*****************************************************/
/*****************************************************************************
* PresidentialDonations
*****************************************************************************
* PROGRAM DESCRIPTION:
* A program to compile the highest, lowest, average, and total donations for both
* Donald Trump and Hillary Clinton in the 2016 election.
*****************************************************************************
* ALGORITHM:
* 1. Create function to read and output presidential stats
* 2. Open file, output error if it doesn't open
* 3. Until the end of the file, read file into donation and add to sum
* 4. Determine if the donation is the min or max and assign appropriately
* 5. Close the file
* 6. Calculate the average by dividing sum by count
* 7. Output all the stats as stated in description
* 8. In main, call presidentialStats using both Hillary Clinton and Donald Trump files
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
* <fstream>: to read and/or write to files.
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int presidentialStats(string fileName, string candidate)
{
    int donation, count, min, max;
    double sum, average;
    bool isNotOpen;
    
    
    ifstream inFile;

    //Try to open file
    inFile.open(fileName.c_str());
    
    count = 0;
    min = INT_MAX;
    max = INT_MIN;
    sum = 0;
    isNotOpen = !inFile.is_open();
    
    //Check to see if it's open
    if(isNotOpen)
    {
        cout << "Error: file " << fileName << " could not open.";
        return EXIT_FAILURE;
    }
    
    while(!inFile.eof())
    {
        inFile >> donation;
        //Add 1 to the count of donations
        count++;
        //Add donation to the sum
        sum += donation;
        //Determine if the donation is the min
        if (donation < min)
        {
            min = donation;
        }
        if(donation > max)
        {
            max = donation;
        }
        
    }
    
    //After reading all donations from the file:
    inFile.close();
    average = sum / count;
    
    cout << "~~~For candidate " << candidate << "~~~\n\n";
    cout << "The number of contributions was  : " << count << "\n";
    cout << "The minimum contribution was     : $" << min << "\n";
    cout << "The maximum contribution was     : $" << max << "\n";
    cout << fixed << setprecision(2) << "The average contribution was     : $" << average << "\n";
    cout << fixed << setprecision(2) <<"The total amount contributed was : $" << sum << "\n\n";
    
    return EXIT_SUCCESS;
}

int main(int arcgc, char * argv[])
{
    presidentialStats("clinton2016donations.txt", "Hillary Clinton");
    presidentialStats("trump2016donations.txt", "Donald Trump");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
