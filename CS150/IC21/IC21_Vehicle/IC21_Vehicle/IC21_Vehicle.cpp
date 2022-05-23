/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #21
 * LAST MODIFIED: 11/08/18
 *****************************************************/
/*****************************************************************************
 * Vehicle
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to make vehicle objects that can accelerate and brake
 *****************************************************************************
 * ALGORITHM:
 * 1. Create a new vehicle object by calling Vehicle constructor and filling parameters
 * with the year, make, model, and owner
 * 2. Output make, model, year, owner, and current speed
 * 3. Call accelerate function in Vehicle 10 times, output info from step 2
 * for each call
 * 4. Call brake function in Vehicle 5 times, output info from step 2
 * for each call
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

class Vehicle
{
    private:
    
        int m_year;
        std::string m_make;
        std::string m_model;
        double m_speed;
        std::string m_owner;
    
    public:
    
        //Constructors
    
        Vehicle()
        {
            setAll(0, "", "", "");
            m_speed = 0.0;
        }
    
        Vehicle(int year, std::string make, std::string model, std::string owner)
        {
            setAll(year, make, model, owner);
            m_speed = 0.0;
        }
    
        //Make a friend function to overload << (SIO)
        //Declare the function prototype
        friend std::ostream& operator<<(std::ostream& os, const Vehicle& myCar);
    
        //Setters
    
        void setAll(int year, std::string make, std::string model, std::string owner)
        {
            setYear(year);
            setMake(make);
            setModel(model);
            setOwner(owner);
        }
    
        void setYear(int year)
        {
            m_year = year;
        }
    
        void setMake(std::string make)
        {
            m_make = make;
        }
    
        void setModel(std::string model)
        {
            m_model = model;
        }
    
        void setOwner(std::string owner)
        {
            m_owner = owner;
        }
    
        //Getters
    
        int getYear()
        {
            return m_year;
        }
    
        std::string getMake()
        {
            return m_make;
        }
    
        std::string getModel()
        {
            return m_model;
        }
    
        double getSpeed()
        {
            return m_speed;
        }
    
        std::string getOwner()
        {
            return m_owner;
        }
    
        //Helper functions
    
        double accelerate(double amount)
        {
            m_speed += amount;
            return m_speed;
        }
    
        double brake(double amount)
        {
            m_speed -= amount;
            return m_speed;
        }
};

//Function implementation
std::ostream& operator << (std::ostream& os, const Vehicle& v)
{
    os << "Vehicle [" << v.m_year << " " << v.m_make << " " << v.m_model
    << ", " << v.m_owner << ", Speed = " << v.m_speed << " mph]";
    
    return os;
}

int main(int argc, char * argv[])
{
    Vehicle elonsCar(2019, "Tesla", "Model S P100D", "Elon Musk");
    std::cout << "~~~Elon's Tesla~~~\n" << elonsCar << std::endl;
    std::cout << "\nAccelerating 10 times!" << std::endl;
    
    for(int i = 0; i < 10; i++)
    {
        elonsCar.accelerate(10);
        std::cout << elonsCar << std::endl;
    }
    
    std::cout << "\nBraking 5 times!" << std::endl;
    for(int i = 0; i < 5; i++)
    {
        elonsCar.brake(5);
        std::cout << elonsCar << std::endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
