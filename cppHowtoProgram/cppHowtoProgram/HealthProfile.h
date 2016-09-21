#pragma once
#include <string>

class HealthProfile {
public:
	HealthProfile(std::string, std::string, int, int, int, std::string, int, int);

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

	void setGender(std::string);

	std::string getGender();

	void setHeight(int);

	int getHeight();

	void setWeight(int);

	int getWeight();

	int getBMI();

	void displayBMIChart();

	void displayInfor();
private:
	std::string m_fname;
	std::string m_lname;
	std::string m_gender;
	int m_day;
	int m_month;
	int m_year;
	int m_currentyear;
	int m_height;
	int m_weight;
};
