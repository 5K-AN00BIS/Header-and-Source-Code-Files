// Ryan Bachman
// CSC215 - C/C++ Programming I
// University of Advancing Technology
// Header and Source Code files for Projects.
// November 06, 2018

#include "Header.h"
#include <iostream>
#include <string>

using namespace std;

// Main function.
int main()
{
// Sets playAgain to y so the loop can play at least once.
    char playAgain = 'y';

// Loop everything so that the game can be replayed.
    while (playAgain == 'y')
    {
        cout << "Welcome to your own interactive story adventure.\n\n";
        cout << "Answer the questions below to help make your story unique.\n\n";
// Asks the user for their name and sets their input to name.
        string name = getTextFromUser("What is your name?: ");
// Asks the user for their age and sets their input to the integer age.
        int age = getNumbersFromUser("How old are you?: ");
// Asks the user what their favorite body part is and sets their input to favoriteAppendage.
        string favoriteAppendage = getTextFromUser("What's your favorite body part?: ");
// Asks the user for a verb in current tense and sets their input to verb.
        string verb = getTextFromUser("Please enter a verb (current tense like eating, jumping, etc): ");
// Begins telling the story, passing in the arguments collected from the functions above.
        storyTelling(name, age, favoriteAppendage, verb);
// Calls the playAnother function at the end of the story to ask if the player wants to play again.
        playAgain = playAnother(playAgain);
    }

    return 0;
}