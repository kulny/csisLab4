#include "stdafx.h"
#include "Student.h"

Student::Student(std::string name)
{
	SetlName(name);
}

void Student::SetlName(std::string name)
{
	lName = name;
}

std::string Student::GetlName()
{
	return lName;
}

void Student::DisplayGrades()
{
	std::cout << lName << "'s grades are: " << std::endl;
	for (int i : grades) // prints each grade in array
	{
		std::cout << i << std::endl;
	}
}

void Student::AddMultipleGrades()
{
	int grade;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please input a grade or input '-1' to stop inputting grades." << std::endl;

		std::cin >> grade;

		if (grade == -1) // stops asking for grades if input is -1
		{
			break;
		}

		AddGrade(grade);
	}
}

void Student::AddGrade(int grade) // adds grade to array
{
	grades.push_back(grade);
}
