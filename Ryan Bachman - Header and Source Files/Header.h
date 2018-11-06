//
// Created by Ryan Bachman on 11/6/18.
//

#ifndef RYAN_BACHMAN_HEADER_AND_SOURCE_FILES_HEADER_H
#define RYAN_BACHMAN_HEADER_AND_SOURCE_FILES_HEADER_H

#include <iostream>
#include <string>

using namespace std;

// Function prototype. Gets the text from the user.
string getTextFromUser(string prompt);
// Function prototype. Gets the number from the user.
int getNumbersFromUser(string prompt);
// Function prototype. Telling the story to the player.
void storyTelling(string name, int age, string favoriteAppendage, string verb);
// Function prototype. This asks and tracks whether the player wants to keep playing.
char playAnother(char playAgain);

#endif //RYAN_BACHMAN_HEADER_AND_SOURCE_FILES_HEADER_H