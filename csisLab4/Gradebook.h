#pragma once

#include <string>
#include <vector>
#include "Student.h"


class Gradebook
{
public:
	Gradebook(std::string name); // initializes to gradebook name
	
	// Setters
	void SetgradebookName(std::string name);

	// Getters
	std::string GetgradebookName();
	int GetNumStudents();

	// Operations
	void AddStudent(std::string studentName);
	void PrintAllRecords();

private:
	// Vars
	std::vector<Student> gradebook;
	std::string gradebookName;




};

