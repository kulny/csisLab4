//Gradebook 1 -- store a gradebook
//CSIS 112-2
//<Sources if necessary>


//Include statements
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gradebook.h"

using namespace std;

//Global declarations: Constants and type definitions only -- NO variables
enum choices
{
	ADD, LIST, QUIT
};

//Function prototypes
void ChoiceMenu(choices menuChoice, Gradebook& gbook);
choices getChoice(bool& bquit);

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Cody Moore -- Lab Number 4" << endl << endl;

	//Variable declarations
	std::string gname;
	bool quit = false; // looping bool

	//Program logic
	std::cout << "Please enter a name for your gradebook." << std::endl;

	std::cin >> gname;

	Gradebook g1(gname);

	do
	{
		std::cout << "What would you like to do? Add (A), List (L), or Quit (Q)." << std::endl;

		ChoiceMenu(getChoice(quit), g1); // gets user choices, flips bool on QUIT, and gives access to each feature A, L, Q
	} while (!quit); // quit is negated because in functions it is used in, it's more readable to have it become true rather than become false


	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions

void ChoiceMenu(choices menuChoice, Gradebook& gbook) // reference to make sure gradebook can be changed within scope of other functions
{
	switch (menuChoice)
	{
	default:
		break;
	case ADD:
		if (gbook.GetNumStudents() < 3)
		{
			std::string studentName;

			std::cout << "What is the name of the student you would like to add?" << std::endl;

			std::cin >> studentName;

			gbook.AddStudent(studentName);
		}
		else
		{
			std::cout << "There are already 3 students in the gradebook." << std::endl;
		}
		break;

	case LIST:
		gbook.PrintAllRecords();
		break;

	case QUIT:
		// getChoice already flips this bool, ending the loop. Leaving case to prevent ambiguity and misunderstanding.
		break;
	}
}

choices getChoice(bool& bquit)
{
	char userChoice;

	std::cin >> userChoice;

	if (userChoice == 'a' || userChoice == 'A')
	{
		return ADD;
	}
	else if (userChoice == 'l' || userChoice == 'L')
	{
		return LIST;
	}
	else if (userChoice == 'q' || 'Q')
	{
		bquit = true;
		return QUIT;
	}
	return choices();
}
