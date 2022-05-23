/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #19
 * LAST MODIFIED: 11/12/18
 *****************************************************/
/*****************************************************************************
 * WeatherObservations
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to tell the weather.
 *****************************************************************************
 * ALGORITHM:
 * 1. Create object of Weather structure
 * 2. Ask user for date, time, zip, temperature, humidity, visibility, and units.
 * Apply all to Weather object variables.
 * 3. Based on units choice, output weather results with proper units for temp and humidity.
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *****************************************************************************/

#include <cstdlib>
#include <iostream>

//Declare structs
struct Weather
{
    std::string date, time, zipcode, units;
    int temp, humidity;
    double visibility;
};

int main(int argc, char * argv[])
{
    //Declare one struct to store all values
    Weather wxData;
    std::cout << "~~~Current Weather Observation~~~" << std::endl
    << "Enter date in form of MM/DD/YYYY: ";
    std::cin >> wxData.date;
    
    std::cout << "Enter time: ";
    std::cin.ignore(INT_MAX, '\n');
    std::getline(std::cin, wxData.time);
    
    std::cout << "Enter zip code: ";
    std::cin >> wxData.zipcode;
    
    std::cout << "Enter temperature: ";
    std::cin >> wxData.temp;
    
    std::cout << "Enter humidity: ";
    std::cin >> wxData.humidity;
    
    std::cout << "Enter visibility: ";
    std::cin >> wxData.visibility;
    
    std::cout << "Enter units (IMPERIAL or METRIC): ";
    std::cin >> wxData.units;
    
    if(wxData.units == "IMPERIAL")
    {
        std::cout << "\n~~~Weather Report~~~\n"
        << "On " << wxData.date << " @ " << wxData.time << ", zip code " << wxData.zipcode
        << " experienced a temperature of " << wxData.temp << "F, \nhumidity "
        << wxData.humidity << "% and visibility of " << wxData.visibility << " miles\n\n";
    }
    else
    {
        std::cout << "\n~~~Weather Report~~~\n"
        << "On " << wxData.date << " @ " << wxData.time << ", zip code " << wxData.zipcode
        << " experienced a temperature of " << wxData.temp << "C, \nhumidity "
        << wxData.humidity << "% and visibility of " << wxData.visibility << " km\n\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
