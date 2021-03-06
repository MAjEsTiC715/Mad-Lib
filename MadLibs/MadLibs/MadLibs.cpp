// MadLibs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Here I set up my function prototypes for my 3 functions
string getTextFromUser(string prompt);
int getNumbersFromUser(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

// The main() function calls all of the other functions.
// It calls the funciton getTextFromUser() to get a name, 
// Plural noun, body part, and verb from the user. It calls 
// getNumbersFromUser() to get a number from the user.
// It calls tellStory() with all of the user-supplied
// Information to generate and display the story.
int main()
{
	cout << "Welcome to Mad Lib.\n\n";
	cout << "Answer the following questions to help create a new story. \n";

	string name = getTextFromUser("Please enter a name: ");
	string noun = getTextFromUser("Please enter a plural noun: ");
	int number = getNumbersFromUser("Please enter a number: ");
	string bodyPart = getTextFromUser("Please enter a body part: ");
	string verb = getTextFromUser("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	return 0;
}

// The getTextFromUser() function gets a string from the user.
// The function is versatile and takes a parameter of type 
// string, which it uses to prompt the user. Because of this, 
// I am able to call this single function to ask the user for a 
// variety of different pieces of information, including a name,
// plural noun, body part, and a verb.
string getTextFromUser(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

// The getNumbersFromUser() function gets an integer from 
// the user. Although I only call it once inn the program,
// it is versatile because it takes a parameter of type
// string that it uses to prompt the user.
int getNumbersFromUser(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

// The tellStory() function takes all the information
// entered by the user and uses it to display a personalized story.
void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day, the ";
	cout << noun;
	cout << " found the explorer.\n";
	cout << "Sorrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ".\n";
	cout << "After all this time, the quest was finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << ". ";
	cout << "The moral of the story? be careful what you ";
	cout << verb;
	cout << " for.\n";
}