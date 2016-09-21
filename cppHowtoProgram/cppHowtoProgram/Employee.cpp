#include <iostream>
#include <string>
#include "Employee.h"

void Employee::setFirstName(std::string p_fname) {
	m_fname = p_fname;
}

std::string Employee::getFirstName() {
	return m_fname;
}

void Employee::setLastName(std::string p_lname) {
	m_lname = p_lname;
}

std::string Employee::getLastName() {
	return m_fname;
}

void Employee::setMonthSalary(int p_sal) {
	if (p_sal < 0)
		p_sal = 0;
	m_sal = p_sal;
}

int Employee::getMonthSalary() {
	return m_sal;
}

void Employee::raiseSalary(int p_raise) {
	m_sal = m_sal + (m_sal * p_raise) / 100;
}

int Employee::getAnnualSalary() {
	return m_sal * 12;
}

Employee::Employee(std::string p_fname, std::string p_lname, int p_sal) {
	setFirstName(p_fname);
	setLastName(p_lname);
	setMonthSalary(p_sal);
}