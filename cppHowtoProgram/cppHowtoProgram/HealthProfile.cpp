#include <iostream>
#include <string>
#include "HealthProfile.h"

void HealthProfile::setFirstName(std::string p_fname) {
	m_fname = p_fname;
}

std::string HealthProfile::getFirstName() {
	return m_fname;
}

void HealthProfile::setLastName(std::string p_lname) {
	m_lname = p_lname;
}

std::string HealthProfile::getLastName() {
	return m_lname;
}

void HealthProfile::setDay(int p_day) {
	m_day = p_day;
}

int HealthProfile::getDay() {
	return m_day;
}

void HealthProfile::setMonth(int p_month) {
	m_month = p_month;
}

int HealthProfile::getMonth() {
	return m_month;
}

void HealthProfile::setYear(int p_year) {
	m_year = p_year;
}

int HealthProfile::getYear() {
	return m_year;
}

void HealthProfile::setCurrentYear(int p_currentyear) {
	m_currentyear = p_currentyear;
}

int HealthProfile::getAge() {
	return m_currentyear - m_year;
}

int HealthProfile::getMaximumHeartRate() {
	return 220 - getAge();
}

std::string HealthProfile::getTargetHeartRate() {
	return std::to_string((getMaximumHeartRate() * 0.5)) + " - " + std::to_string((getMaximumHeartRate() * 0.85)) + "%";
}

void HealthProfile::setGender(std::string p_gender) {
	m_gender = p_gender;
}
std::string HealthProfile::getGender() {
	return m_gender;
}

void HealthProfile::setHeight(int p_height) {
	m_height = p_height;
}

int HealthProfile::getHeight() {
	return m_height;
}

void HealthProfile::setWeight(int p_weight) {
	m_weight = p_weight;
}

int HealthProfile::getWeight() {
	return m_weight;
}

int HealthProfile::getBMI() {
	return (getWeight() * 703) / (getHeight() * getHeight());
}

void HealthProfile::displayBMIChart() {
	std::cout << "========================================" << std::endl;
	std::cout << "BMI VALUES" << std::endl;
	std::cout << "Underweight: less than 18.5" << std::endl;
	std::cout << "Normal: between 18.5 and 24.9" << std::endl;
	std::cout << "Overweight: between 25 and 29.9" << std::endl;
	std::cout << "Obese: 30 or greater" << std::endl;
	std::cout << "========================================" << std::endl;
}

void HealthProfile::displayInfor() {
	std::cout << "==================== Patient Information ====================" << std::endl;
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Date of Birth: " << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
	std::cout << "Gender: " << getGender() << std::endl;
	std::cout << "Height: " << getHeight() << "\"" << std::endl;
	std::cout << "Weight: " << getWeight() << "lbs" << std::endl;
}

HealthProfile::HealthProfile(std::string p_fname, std::string p_lname, int p_day, int p_month, int p_year, std::string p_gender, int p_height, int p_weight) {
	setFirstName(p_fname);
	setLastName(p_lname);
	setDay(p_day);
	setMonth(p_month);
	setYear(p_year);
	setGender(p_gender);
	setHeight(p_height);
	setWeight(p_weight);
}