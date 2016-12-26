// GradeBook.h
#include <string>


// GradeBook class definition
class GradeBook {
public:
	// constructor initialise courseName and instructor name
	GradeBook(std::string, std::string);

	std::string getCourseName() const;
	std::string getInstructorName() const;

	void setCourseName(std::string);
	void setInstructorName(std::string);
	
	void determineClassAverage();
	void inputGrades();
	
	void displayMessage();
	void displayGradeReport();
	
	int maximum(int, int, int);

private:
	std::string courseName;
	std::string instructorName;
	int maximumGrade;
}; // end of class
