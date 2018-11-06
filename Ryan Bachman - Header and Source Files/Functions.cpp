//
// Created by Ryan Bachman on 11/6/18.
//

#include <iostream>
#include <string>

using namespace std;

// Function that gets string text from the user.
string getTextFromUser(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}
// Function that gets an integer from the user.
int getNumbersFromUser(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}
// Meat of the program. This lays out the entire story using the arguments passed into it using many cout statements and calling variables.
int storyTelling(string name, int age, string favoriteAppendage, string
verb)
{
    char yesOrNo = 'x';

    cout << "\nHere's your story:\n";
    cout << "Your name is ";
    cout << name;
    cout << " and you and your friends have decided to explore a spooky mansion.\n";

    while (yesOrNo != 'y')
    {
        cout << "The mansion has a foreboding presence to it. Do you go inside? (y/n): ";
        cin >> yesOrNo;
        cout << "\n\n";

        if (yesOrNo == 'y')
        {
            cout << "You and your friends make your way to the heavy double rotting oak doors. \n";
            cout << "You push them open and you all pour inside timidly...\n";
        }
        else if (yesOrNo == 'n')
        {
            cout << "You're not very brave even though you're \n";
            cout << age << " years old. Time to grow up.\n";
            cout << "You all chicken out and head home. This is the end of your story...\n\n";

            return 0;
        }
        else
        {
            cout << "You aren't following directions... Do you want to hear the story or not?\n\n";
        }
    }

    // Set yesOrNo back to X after the loop so we can recycle the variable for use later on.
    yesOrNo = 'x';

    cout << "Upon entering the building, you already hear very unnatural sounds.\n";
    cout << "You notice a staircase leading up to the second floor right off the bat.\n";

    while (yesOrNo != 'y' && yesOrNo != 'n')
    {
        cout << "Do you dare go up the stairs? (y/n): ";
        cin >> yesOrNo;
        cout << "\n\n";

        if (yesOrNo == 'y')
        {
            cout << "Your friends decide that they aren't as brave as you so you go alone. \n";
            cout << "Upon making it to the second floor, you walk down a long hallway\n";
            cout << "dotted by full suits of medieval armor on both sides of you.\n";
            cout << "While making your way past one of the suits, the suit swings down \n";
            cout << "it's halberd and cuts your ";
            cout << favoriteAppendage;
            cout << " right off of you.\n";
            cout << "Holy crap, that's nasty...\n";
            cout << "You let out a howling scream of pain which sends your friends running out.\n";
            cout << "The pain is so severe, you actually start ";
            cout << verb << ".\n";
            cout << "So now, you're in a haunted place missing your \n";
            cout << favoriteAppendage << " and ";
            cout << verb;
            cout << " like a weirdo or something.\n";
            cout << "Unfortunately, you end up bleeding too much and succumbing to your injuries. Oof...\n";
        }
        else if (yesOrNo == 'n')
        {
            cout << "You and your friends decide to stay downstairs..\n";
            cout << "*cough* COWARDS *cough* ....\n";
            cout << "You continue to explore the ground level.\n";
            cout << "Unfortunately, it looks like you explored the boring half of the house.\n";
            cout << "Nothing spooky happened, but you did step on a rusty nail and developed tetanus.\n";
            cout << "Congratulations, you're now going to die at " << age << " years old...\n\n";
        }
        else
        {
            cout << "You aren't following directions... Do you want to hear the story or not?\n\n";
        }
    }

    cout << "Game over!\n\n";
}

// Asks the player if they want to play again and returns the playAgain char. If not 'y', the program stops.
char playAnother(char playAgain)
{
    cout << "Would you like to play the game again? (y/n): ";
    cin >> playAgain;
    cout << "\n\n";

    return playAgain;
}