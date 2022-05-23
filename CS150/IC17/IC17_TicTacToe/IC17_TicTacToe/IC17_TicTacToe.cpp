/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #17
 * LAST MODIFIED: 11/1/18
 *****************************************************/
/*****************************************************************************
 * TicTacToe
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to play Tic Tac Toe
 *****************************************************************************
 * ALGORITHM:
 * 1. Create a 3x3 2d array
 * 2. Fill 2d array with default star values
 * 3. Ask player 1 for their choice
 * 4. If their choices result in 3 in a row horizontally, diagonally, or vertically, declare them winner
 * 5. Ask player 2 for their choice
 * 6. If their choices result in 3 in a row horizontally, diagonally, or vertically, declare them winner
 * 7. Output the winner (player 1 or player 2).
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

int main(int argc, const char * argv[])
{
    int row, column;
    char ticTacToe[3][3], firstChar = ' ';
    bool isNotValid = true, winner = true, xWin = false, oWin = false;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            ticTacToe[i][j] = '*';
        }
    }
    
    std::cout
    << "-------------\n"
    << "| " << ticTacToe[0][0] << " | " << ticTacToe[0][1] << " | " << ticTacToe[0][2] << " |\n"
    << "-------------\n"
    << "| " << ticTacToe[1][0] << " | " << ticTacToe[1][1] << " | " << ticTacToe[1][2] << " |\n"
    << "-------------\n"
    << "| " << ticTacToe[2][0] << " | " << ticTacToe[2][1] << " | " << ticTacToe[2][2] << " |\n"
    << "-------------\n";
    
    do
    {
        std::cout << "Player 1: Please enter a row: ";
        std::cin >> row;
        row--;
        std::cout << "Player 1: Please enter a column: ";
        std::cin >> column;
        column--;
        
        ticTacToe[row][column] = 'X';
        
        std::cout
        << "-------------\n"
        << "| " << ticTacToe[0][0] << " | " << ticTacToe[0][1] << " | " << ticTacToe[0][2] << " |\n"
        << "-------------\n"
        << "| " << ticTacToe[1][0] << " | " << ticTacToe[1][1] << " | " << ticTacToe[1][2] << " |\n"
        << "-------------\n"
        << "| " << ticTacToe[2][0] << " | " << ticTacToe[2][1] << " | " << ticTacToe[2][2] << " |\n"
        << "-------------\n";
        
        //Horizontal Check
        for(int i = 0; i < 3; i++)
        {
            winner = true;
            for(int j = 0; j < 3; j++)
            {
                if(ticTacToe[i][j] == '*')
                {
                    winner = false;
                    break;
                }
                
                if(j == 0)
                {
                    firstChar = ticTacToe[i][0];
                }
                else if (ticTacToe[i][j] != firstChar)
                {
                    winner = false;
                }
            }
            
            if(winner == true)
            {
                if(firstChar == 'X')
                {
                    xWin = true;
                    isNotValid = false;
                }
                else
                {
                    oWin = true;
                    isNotValid = false;
                }
                goto endLoop;
            }
        }
        
        //Vertical check
        for(int j = 0; j < 3; j++)
        {
            winner = true;
            for(int i = 0; i < 3; i++)
            {
                if(ticTacToe[i][j] == '*')
                {
                    winner = false;
                    break;
                }
                
                if(i == 0)
                {
                    firstChar = ticTacToe[0][j];
                }
                else if (ticTacToe[i][j] != firstChar)
                {
                    winner = false;
                }
            }
            
            if(winner == true)
            {
                if(firstChar == 'X')
                {
                    xWin = true;
                    isNotValid = false;
                }
                else
                {
                    oWin = true;
                    isNotValid = false;
                }
                goto endLoop;
            }
        }
        
        //Diagonal Check
        if(ticTacToe[0][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][2])
        {
            if(ticTacToe[1][1] == 'X')
            {
                xWin = true;
                isNotValid = false;
                goto endLoop;
            }
            else if(ticTacToe[1][1] == 'O')
            {
                oWin = true;
                isNotValid = false;
                goto endLoop;
            }
        }
        else if (ticTacToe[2][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[0][2])
        {
            if(ticTacToe[1][1] == 'X')
            {
                xWin = true;
                isNotValid = false;
                goto endLoop;
            }
            else if(ticTacToe[1][1] == 'O')
            {
                oWin = true;
                isNotValid = false;
                goto endLoop;
            }
        }
       
        std::cout << "Player 2: Please enter a row: ";
        std::cin >> row;
        row--;
        std::cout << "Player 2: Please enter a column: ";
        std::cin >> column;
        column--;
        
        ticTacToe[row][column] = 'O';
        
        std::cout
        << "-------------\n"
        << "| " << ticTacToe[0][0] << " | " << ticTacToe[0][1] << " | " << ticTacToe[0][2] << " |\n"
        << "-------------\n"
        << "| " << ticTacToe[1][0] << " | " << ticTacToe[1][1] << " | " << ticTacToe[1][2] << " |\n"
        << "-------------\n"
        << "| " << ticTacToe[2][0] << " | " << ticTacToe[2][1] << " | " << ticTacToe[2][2] << " |\n"
        << "-------------\n";
        
        //Horizontal check
        for(int i = 0; i < 3; i++)
        {
            winner = true;
            for(int j = 0; j < 3; j++)
            {
                if(ticTacToe[i][j] == '*')
                {
                    winner = false;
                    break;
                }
                
                if(j == 0)
                {
                    firstChar = ticTacToe[i][0];
                }
                else if (ticTacToe[i][j] != firstChar)
                {
                    winner = false;
                }
            }
            
            if(winner == true)
            {
                if(firstChar == 'X')
                {
                    xWin = true;
                    isNotValid = false;
                }
                else
                {
                    oWin = true;
                    isNotValid = false;
                }
            }
        }
        
        //Vertical check
        for(int j = 0; j < 3; j++)
        {
            winner = true;
            for(int i = 0; i < 3; i++)
            {
                if(ticTacToe[i][j] == '*')
                {
                    winner = false;
                    break;
                }
                
                if(i == 0)
                {
                    firstChar = ticTacToe[0][j];
                }
                else if (ticTacToe[i][j] != firstChar)
                {
                    winner = false;
                }
            }
            
            if(winner == true)
            {
                if(firstChar == 'X')
                {
                    xWin = true;
                    isNotValid = false;
                }
                else
                {
                    oWin = true;
                    isNotValid = false;
                }
                goto endLoop;
            }
        }
        
        //Diagonal Check
        if(ticTacToe[0][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[2][2])
        {
            if(ticTacToe[1][1] == 'X')
            {
                xWin = true;
                isNotValid = false;
            }
            else if(ticTacToe[1][1] == 'O')
             {
                 oWin = true;
                 isNotValid = false;
             }
        }
        else if (ticTacToe[2][0] == ticTacToe[1][1] && ticTacToe[1][1] == ticTacToe[0][2])
        {
            if(ticTacToe[1][1] == 'X')
            {
                xWin = true;
                isNotValid = false;
            }
            else if(ticTacToe[1][1] == 'O')
            {
                oWin = true;
                isNotValid = false;
            }
        }
        
        
    }while (isNotValid);
    endLoop:;
    
    if(xWin == true)
    {
        std::cout << "\nPlayer one wins!\n\n";
    }
    else
    {
        std::cout << "\nPlayer 2 wins!\n\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
