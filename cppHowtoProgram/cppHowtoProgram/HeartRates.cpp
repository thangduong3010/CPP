#include <iostream>
#include <string>
#include "HeartRates.h"

void HeartRates::setFirstName(std::string p_fname) {
	m_fname = p_fname;
}

std::string HeartRates::getFirstName() {
	return m_fname;
}

void HeartRates::setLastName(std::string p_lname) {
	m_lname = p_lname;
}

std::string HeartRates::getLastName() {
	return m_lname;
}

void HeartRates::setDay(int p_day) {
	m_day = p_day;
}

int HeartRates::getDay() {
	return m_day;
}

void HeartRates::setMonth(int p_month) {
	m_month = p_month;
}

int HeartRates::getMonth() {
	return m_month;
}

void HeartRates::setYear(int p_year) {
	m_year = p_year;
}

int HeartRates::getYear() {
	return m_year;
}

void HeartRates::setCurrentYear(int p_currentyear) {
	m_currentyear = p_currentyear;
}

int HeartRates::getAge() {
	return m_currentyear - m_year;
}

int HeartRates::getMaximumHeartRate() {
	return 220 - getAge();
}

std::string HeartRates::getTargetHeartRate() {
	return std::to_string((getMaximumHeartRate() * 0.5)) + " - " + std::to_string((getMaximumHeartRate() * 0.85)) + "%";
}

void HeartRates::displayInfor() {
	std::cout << "==================== Patient Information ====================" << std::endl;
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Date of Birth: " << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
}

HeartRates::HeartRates(std::string p_fname, std::string p_lname, int p_day, int p_month, int p_year) {
	setFirstName(p_fname);
	setLastName(p_lname);
	setDay(p_day);
	setMonth(p_month);
	setYear(p_year);
}