// GradeBook.cpp
#include <iostream>
#include "GradeBook.h" // include definition of class
using namespace std;


// function that sets the course name
void GradeBook::setCourseName(string name) {
	if (name.length() <= 25)
		courseName = name;
	else {
		courseName = name.substr(0, 25);

		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting to the first 25 characters.\n" << endl;
	}
}

// function that gets the course name
string GradeBook::getCourseName() {
	return courseName;
}
// function that displays a welcome message to the GradeBook user
void GradeBook::displayMessage() {
	cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" << endl;
	cout << "This course is represented by: " << getInstructorName() << endl;
} // end of function

void GradeBook::setInstructorName(string name) {
	instructorName = name;
}

string GradeBook::getInstructorName() {
	return instructorName;
}

// constructor initialise courseName with string
GradeBook::GradeBook(string courseName, string instructorName) {
	setCourseName(courseName);
	setInstructorName(instructorName);
}
// explicit default constructor
GradeBook::GradeBook() {
	setCourseName("Hola");
}