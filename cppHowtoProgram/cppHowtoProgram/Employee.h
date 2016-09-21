#pragma once
#include <string>

class Employee {
public:
	Employee(std::string, std::string, int);
	void setFirstName(std::string);
	std::string getFirstName();
	void setLastName(std::string);
	std::string getLastName();
	void setMonthSalary(int);
	int getMonthSalary();
	void raiseSalary(int);
	int getAnnualSalary();
private:
	std::string m_fname, m_lname;
	int m_sal;
};