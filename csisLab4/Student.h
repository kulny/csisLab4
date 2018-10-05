#pragma once

#include <array>
#include <iostream>
#include <vector>
#include <string>

class Student
{
public:
	Student(std::string name); // inits object to given name, and array of grades

	// Setters
	void SetlName(std::string name);

	// Getters
	std::string GetlName();

	// Operations
	void DisplayGrades();
	void AddMultipleGrades();

private:
	// Vars
	std::vector<double> grades;
	std::string lName;
	int numGrades = 5;

	// Operations
	void AddGrade(int grade);


};

