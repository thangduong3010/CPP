#include <iostream>
#include "Date.h"

void Date::setDay(int p_day) {
	m_day = p_day;
}

int Date::getDay() {
	return m_day;
}

void Date::setMonth(int p_month) {
	m_month = p_month;
	if (p_month < 1 || p_month > 12)
		m_month = 1;
}

int Date::getMonth() {
	return m_month;
}

void Date::setYear(int p_year) {
	m_year = p_year;
}

int Date::getYear() {
	return m_year;
}

void Date::displayDate() {
	std::cout << getMonth() << "/" << getDay() << "/" << getYear() << std::endl;
}

Date::Date(int p_month, int p_day, int p_year) {
	setDay(p_day);
	setMonth(p_month);
	setYear(p_year);
}