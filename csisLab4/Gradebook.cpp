#include "stdafx.h"
#include "Gradebook.h"

Gradebook::Gradebook(std::string name)
{
	SetgradebookName(name);
}

void Gradebook::SetgradebookName(std::string name)
{
	gradebookName = name;
}

std::string Gradebook::GetgradebookName()
{
	return gradebookName;
}

int Gradebook::GetNumStudents()
{
	return gradebook.size();
}

void Gradebook::AddStudent(std::string studentName)
{
	Student student(studentName); // creates object with studentName parameter

	student.AddMultipleGrades(); // gets multiple grades for student

	gradebook.push_back(student); // inserts object into gradebook
}

void Gradebook::PrintAllRecords()
{
	for (Student i : gradebook) // calls print on each obj in the array
	{
		i.DisplayGrades();
	}
}
