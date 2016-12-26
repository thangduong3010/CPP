// GradeBook.cpp
#include <iostream>
#include <string>
#include <iomanip>	// parameterized stream manipulators
#include "GradeBook.h"



std::string GradeBook::getCourseName() const { return courseName; }
std::string GradeBook::getInstructorName() const { return instructorName; }

void GradeBook::setCourseName(std::string name) {
	if (name.length() <= 25)
		courseName = name;
	else {
		courseName = name.substr(0, 25);

		std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting to the first 25 characters.\n" << std::endl;
	}

	return;
}

void GradeBook::setInstructorName(std::string name) {
	instructorName = name;

	return;
}


void GradeBook::determineClassAverage() {
	int total = 0;
	int gradeCounter = 0;
	int grade;
	double average;

	// processing phase
	std::cout << "Enter grade or -1 to quit: ";
	std::cin >> grade;

	while (grade != -1) {
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		std::cout << "Enter grade or -1 to quit: ";
		std::cin >> grade;
	}
	
	if (gradeCounter != 0) {
		average = static_cast<double>(total) / gradeCounter;

		std::cout << "\nTotal of all " << gradeCounter << " grades is: " << total << std::endl;
		std::cout << "Class average: " << std::setprecision(2) << std::fixed << average << std::endl;
	}
	else
		std::cout << "No grades were entered" << std::endl;
	
	return;
}

void GradeBook::inputGrades() {
	int grade1;
	int grade2;
	int grade3;

	std::cout << "Enter three integer grades: ";
	std::cin >> grade1 >> grade2 >> grade3;

	maximumGrade = maximum(grade1, grade2, grade3);

	return;
}

void GradeBook::displayMessage() {
	std::cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" << std::endl;
	std::cout << "This course is represented by: " << getInstructorName() << std::endl;

	return;
}

void GradeBook::displayGradeReport() {
	std::cout << "Maximum of grades entered: " << maximumGrade << std::endl;

	return;
}

int GradeBook::maximum(int x, int y, int z) {
	int maximumValue = x;

	if (y > maximumValue)
		maximumValue = y;
	if (z > maximumValue)
		maximumValue = z;

	return maximumValue;
}

// constructor initialise courseName and instructor name
GradeBook::GradeBook(std::string p_courseName, std::string p_instructorName) {
	courseName = p_courseName;
	instructorName = p_instructorName;
}