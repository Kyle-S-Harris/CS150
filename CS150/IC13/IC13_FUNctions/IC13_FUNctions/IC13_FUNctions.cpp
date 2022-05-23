/****************************************************
 * AUTHOR: Kyle Stephan Harris
 * COURSE: CS 150: C++ Programming 1
 * SECTION: TTh 11:00-12:50
 * IC (PROJECT)#: Homework #13
 * LAST MODIFIED: 10/14/18
 *****************************************************/
/*****************************************************************************
 * FUNctions
 *****************************************************************************
 * PROGRAM DESCRIPTION:
 * A program to output the number of caps, lowers, vowels, and consonants in a word.
 *****************************************************************************
 * ALGORITHM:
 * 1. Prototype all functions
 * 2. In countCapitals, loop through one char at a time
 * if the char is betweeen 'A' to 'Z', make count go up by one
 * 3. In countLowerCase, loop through one char at a time
 * if the char is betweeen 'a' to 'z', make count go up by one
 * 4. In countVowels, loop through one char at a time
 * if the char is 'A'/'a' or 'E'/'e' or 'I'/'i' or 'O'/'o' or 'U'/'u', make count go up by one
 * 5. In countConsonants, loop through one char at a time
 * if the char is 'A'/'a' or 'E'/'e' or 'I'/'i' or 'O'/'o' or 'U'/'u', don't do anything
 * otherwise, make count go up by one
 * 6. In main, Ask user for a string
 * 7. Call all functions and fill parameters
 *****************************************************************************
 *****************************************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 * <cstdlib>: C Standard General Utilities Library to perform general operations
 * such as math operations, memory management, searching, sorting, etc.
 *
 * <iostream>: header that defines input/output streams.
 *
 * <string>: to use string libraries
 *****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int countCapitals(string word);
int countLowerCase(string word);
int countVowels(string word);
int countConsonants(string word);

//Above main, function prototypes
int main(int argc, char * argv[])
{
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    cout << "\nThe string \"" << input << "\" has:\n\n";
    
    cout << countCapitals(input) << " capital letter(s)\n";
    cout << countLowerCase(input) << " lowercase letter(s)\n";
    cout << countVowels(input) << " vowel(s)\n";
    cout << countConsonants(input) << " consonant(s)\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

//Below main, function implementations
int countCapitals(string word)
{
    //loop through one char at a time
    // if the char is betweeen 'A' to 'Z', make count go up by one
    
    int count;
    char character;
    
    count = 0;
    
    for (int i = 0; i < word.size(); i++)
    {
        character = word[i];
        if(character >= 'A' && character <= 'Z')
        {
            count++;
        }
    }
    
    //at the end of each function, decide what to return
    //as the output (what is the answer?)
    
    return count;
}

int countLowerCase(string word)
{
    //loop through one char at a time
    // if the char is betweeen 'a' to 'z', make count go up by one
    
    int count;
    char character;
    
    count = 0;
    
    for (int i = 0; i < word.size(); i++)
    {
        character = word[i];
        if(character >= 'a' && character <= 'z')
        {
            count++;
        }
    }
    
    //at the end of each function, decide what to return
    //as the output (what is the answer?)
    
    return count;
}

int countVowels(string word)
{
    //loop through one char at a time
    // if the char is 'A'/'a' or 'E'/'e' or 'I'/'i' or 'O'/'o' or 'U'/'u', make count go up by one
    
    int count;
    char character;
    
    count = 0;
    
    for (int i = 0; i < word.size(); i++)
    {
        character = word[i];
        if(character == 'A' || character == 'a' || character == 'E' || character == 'e' || character == 'I'
           || character == 'i' || character == 'O' || character == 'o' || character == 'U' || character == 'u')
        {
            count++;
        }
    }
    
    //at the end of each function, decide what to return
    //as the output (what is the answer?)
    
    return count;
}

int countConsonants(string word)
{
    //loop through one char at a time
    // if the char is not 'A'/'a' or 'E'/'e' or 'I'/'i' or 'O'/'o' or 'U'/'u', make count go up by one
    
    int count;
    char character;
    
    count = 0;
    
    for (int i = 0; i < word.size(); i++)
    {
        character = word[i];
        if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
        {
            if(character == 'A' || character == 'a' || character == 'E' || character == 'e' || character == 'I'
               || character == 'i' || character == 'O' || character == 'o' || character == 'U' || character == 'u')
            {
            }
            else
            {
                count++;
            }
        
        }
    }
    
    //at the end of each function, decide what to return
    //as the output (what is the answer?)
    
    return count;
}


