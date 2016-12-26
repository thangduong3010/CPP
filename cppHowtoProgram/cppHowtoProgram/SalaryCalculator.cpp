#include <iostream>
#include <iomanip>
#include "SalaryCalculator.h"



void SalaryCalculator::salCalculator() {
	int hourWork;
	int choice;
	int straightTime = 40;
	double hourlyRate;
	double salary;

	std::cout << "Enter 1 to take the quiz, 2 to quit: ";
	std::cin >> choice;

	
	while (choice != 2) {
		if (choice != 1) {
			std::cout << "Invalid input. Do it again" << std::endl;
			std::cout << "Enter 1 to take the quiz, 2 to quit: ";
			std::cin >> choice;
		}
		if (choice == 1) {
			std::cout << "Enter hours worked: ";
			std::cin >> hourWork;
			std::cout << "Enter hourly rate of the employee ($00.00): ";
			std::cin >> hourlyRate;

			if (hourWork <= straightTime)
				salary = hourWork * hourlyRate;
			else
				salary = (straightTime + (hourWork - straightTime) * 1.5) * hourlyRate;

			std::cout << "Salary is: $" << std::setprecision(2) << std::fixed << salary << std::endl;
			return;
		}
	}
}