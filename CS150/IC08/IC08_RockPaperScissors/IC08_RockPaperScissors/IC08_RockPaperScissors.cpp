/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #08
 * LAST MODIFIED: 09/26/18
 *****************************************************/
/*****************************************************************************
 * RockPaperScissors
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A 2-player rock paper scissors game.
 *****************************************************************************
 * ALGORITHM:
 * 1. Ask player 1 for their choice
 * 2. Ask player 2 for their choice
 * 3. If player 1 chose R: If player 2 chose R, it's a tie. If player 2 chose P,
 * player 2 wins. If player 2 chose S, player 1 wins.
 * 4. If player 1 chose P: If player 2 chose R, player 1 wins. If player 2 chose P,
 * it's a tie. If player 2 chose S, player 2 wins.
 * 5. If player 1 chose S: If player 2 chose R, player 2 wins. If player 2 chose P,
 * player 1 wins. If player 2 chose S, it's a tie.
 * 6. Output appropriate result.
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

using namespace std;

int main(int argc, char * argv[])
{
    char player1, player2;
    
    cout << "Player One - Enter R for rock, P for Paper, S for Scissors: ";
    cin >> player1;
    cout << "Player Two - Enter R for rock, P for Paper, S for Scissors: ";
    cin >> player2;
    
    if(player1 == 'R' || player1 == 'r')
    {
        if(player2 == 'R' || player2 == 'r')
        {
            cout << "\nIt's a draw! rock befriends rock.\n\n";
        }
        else if(player2 == 'P' || player2 == 'p')
        {
            cout << "\nPlayer 2 wins! Paper covers rock.\n\n";
        }
        else if(player2 == 'S' || player2 == 's')
        {
            cout << "\nPlayer 1 wins! Rock breaks scissors.\n\n";
        }
        else
        {
            cout << "\nYou have entered an invalid choice! Please enter R, P, S only!\n\n";
            return EXIT_FAILURE;
        }
    }
    else if(player1 == 'P' || player1 == 'p')
    {
        if(player2 == 'R' || player2 == 'r')
        {
            cout << "\nPlayer 1 wins! Paper covers rock.\n\n";
        }
        else if(player2 == 'P' || player2 == 'p')
        {
            cout << "\nIt's a draw! Paper befriends paper.\n\n";
        }
        else if(player2 == 'S' || player2 == 's')
        {
            cout << "\nPlayer 2 wins! Scissors cuts paper.\n\n";
        }
        else
        {
            cout << "\nYou have entered an invalid choice! Please enter R, P, S only!\n\n";
            return EXIT_FAILURE;
        }
    }
    else if(player1 == 'S' || player1 == 's')
    {
        if(player2 == 'R' || player2 == 'r')
        {
            cout << "\nPlayer 2 wins! Rock breaks scissors.\n\n";
        }
        else if(player2 == 'P' || player2 == 'p')
        {
            cout << "\nPlayer 1 wins! Scissors cuts paper.\n\n";
        }
        else if(player2 == 'S' || player2 == 's')
        {
            cout << "\nIt's a draw! Scissors befriends scissors.\n\n";
        }
        else
        {
            cout << "\nYou have entered an invalid choice! Please enter R, P, S only!\n\n";
            return EXIT_FAILURE;
        }
    }
    else
    {
        cout << "\nYou have entered an invalid choice! Please enter R, P, S only!\n\n";
        return EXIT_FAILURE;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
