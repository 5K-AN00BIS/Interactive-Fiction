// Ryan Bachman - Interactive Fiction Story.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ryan Bachman
// CSC215 C/C++ Programming
// University of Advancing Technology
// Interactive Fiction Story
// October 28, 2018

#include "pch.h"
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
void storyTelling(string name, int age, string favoriteAppendage, string verb)
{
	cout << "\nHere's your story:\n";
	cout << "Your name is ";
	cout << name;
	cout << " and you and your friends have decided to explore a spooky mansion.\n";
	cout << "You're not very brave even though you're \n";
	cout << age << " years old. How embarrassing of you.\n";
	cout << "While exploring the location, you hear very unnatural sounds.\n";
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
	cout << "Game over! You were always meant to lose this battle. Happy halloween!\n\n";
}

// Asks the player if they want to play again and returns the playAgain char. If not 'y', the program stops.
char playAnother(char playAgain)
{
	cout << "Would you like to play the game again? (y/n): ";
	cin >> playAgain;
	cout << "\n\n";
	return playAgain;
}