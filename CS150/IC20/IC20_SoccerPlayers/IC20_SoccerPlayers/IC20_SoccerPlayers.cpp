/****************************************************
* AUTHOR: Kyle Stephan Harris
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11:00-12:50
* IC (PROJECT)#: Homework #20
* LAST MODIFIED: 11/13/18
*****************************************************/
/*****************************************************************************
 * SoccerPlayers
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program that takes all of Bayern Munich's players and info and stores them in an array.
 *****************************************************************************
 * ALGORITHM:
 * 1. Output menu header
 * 2. For each player, ask for name, jersey number, and number of goals and store in array of Player.
 * 3. Check jersey num and goals for validity and do not continue until valid
 * 4. If the current player's goals are greater than the max, make them the new
 * holder of the max goals on the team.
 * 5. Output table of the starting lineup with all players and their information
 * and output the total goals scored by the team and the player with the most goals.
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

struct Player
{
    std::string name;
    int num;
    int goals;
};

double inputValidation(std::string message, std::string errorMessage, double min, double max);

int main(int argc, char * argv[])
{
    Player soccerPlayers[11];
    int currentPlayer, playerNum, totalGoals = 0, max = INT_MIN;
    std::string maxName;
    
    std::cout << "**************************************************\n"
              << "                  PLAYER ENTRY                    \n"
              << "                FC BAYERN MUNICH                  \n"
              << "**************************************************\n";
    
    for(int i = 0; i < 11; i++)
    {
        currentPlayer = i + 1;
        
        std::cin.clear();
        std::cout << "~~~For Player #" << currentPlayer << "~~~\n";
        std::cout << "Enter Player's Name: ";
        getline(std::cin, soccerPlayers[i].name);
        
        //std::cin.clear();
        //std::cin.ignore(INT_MAX, '\n');
        
        playerNum = inputValidation("Enter Jersey Number: ", "Error: please enter a non-negative number.", 0, INT_MAX);
        soccerPlayers[i].num = playerNum;
        
        soccerPlayers[i].goals = inputValidation("Enter Goals Scored: ", "Error: please enter a number.", INT_MIN, INT_MAX);
        
        totalGoals += soccerPlayers[i].goals;
        if(soccerPlayers[i].goals > max)
        {
            max = soccerPlayers[i].goals;
            maxName = soccerPlayers[i].name;
        }
        
        std::cout << std::endl;
        
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

    }
    
    std::cout << "**************************************************\n"
              << "                  Starting Lineup                 \n"
              << "**************************************************\n"
              << "JERSEY #       PLAYER NAME                  GOALS\n"
              << "**************************************************\n";

    for(int i = 0; i < 11; i++)
    {
        std::cout << std::left << std::setw(15) << soccerPlayers[i].num
        << std::setw(30) << soccerPlayers[i].name << soccerPlayers[i].goals << std::endl;
    }
    
    std::cout << "\nThe total goals scored by the team is " << totalGoals << ".\n"
    << "The player with the most goals is " << maxName << " with " << max << " goals.\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

double inputValidation(std::string message, std::string errorMessage, double min, double max)
{
    double userInput;
    bool isNotValid = true;
    
    do
    {
        
        std::cout << message;
        std::cin >> userInput;
        
        isNotValid = std::cin.fail() || userInput < min || userInput > max;
        
        
        if (isNotValid)
        {
            std::cout << errorMessage << std::endl;
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
        
    }while(isNotValid);
    
    return userInput;
}
