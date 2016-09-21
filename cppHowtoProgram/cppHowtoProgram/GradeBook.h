// GradeBook.h
#include <string>

using namespace std;

// GradeBook class definition
class GradeBook {
public:
	// constructor initialise courseName with string
	GradeBook(string, string);
	// explicit default constructor
	GradeBook();
	// function that sets the course name
	void setCourseName(string);
	// function that gets the course name
	string getCourseName();
	// function that displays a welcome message to the GradeBook user
	void displayMessage();
	void setInstructorName(string);
	string getInstructorName();
	
	
private:
	string courseName;
	string instructorName;
}; // end of class
