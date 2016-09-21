#pragma once
#include <string>

class HeartRates {
public:
	HeartRates(std::string, std::string, int, int, int);

	void setFirstName(std::string);

	std::string getFirstName();

	void setLastName(std::string);

	std::string getLastName();

	void setDay(int);

	int getDay();

	void setMonth(int);

	int getMonth();

	void setYear(int);

	int getYear();

	void setCurrentYear(int);

	int getAge();

	int getMaximumHeartRate();

	std::string getTargetHeartRate();

	void displayInfor();
private:
	std::string m_fname;
	std::string m_lname;
	int m_day;
	int m_month;
	int m_year;
	int m_currentyear;
};
