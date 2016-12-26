#include <iostream>
#include <string>
#include <iomanip>
#include "CreditLimit.h"

void CreditLimit::calCreditLimit() {
	int accNumber;
	double beginningBalance;
	double totalCharge;
	double totalCredit;
	double allowedLimit;
	double newBalance;

	std::cout << "Enter account number (or type -1 to quit): ";
	std::cin >> accNumber;

	if (accNumber == -1) {
		std::cout << "No account number has been entered" << std::endl;
		return;
	}

	std::cout << "Enter beginning balance: ";
	std::cin >> beginningBalance;
	std::cout << "Enter total charges: ";
	std::cin >> totalCharge;
	std::cout << "Enter total credits: ";
	std::cin >> totalCredit;
	std::cout << "Enter credit limits: ";
	std::cin >> allowedLimit;

	while (accNumber != -1) {
		newBalance = beginningBalance + totalCharge - totalCredit;

		std::cout << "New balance is: " << std::setprecision(2) << std::fixed << newBalance << std::endl;
		if (newBalance > allowedLimit) {
			std::cout << "Account: " << std::setprecision(2) << std::fixed << accNumber << std::endl;
			std::cout << "Credit limit: " << std::setprecision(2) << std::fixed << allowedLimit << std::endl;
			std::cout << "Balance: " << std::setprecision(2) << std::fixed << newBalance << std::endl;
			std::cout << "Credit Limit Exceeded" << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Enter account number (or type -1 to quit): ";
		std::cin >> accNumber;

		if (accNumber != -1) {
			std::cout << "Enter beginning balance: ";
			std::cin >> beginningBalance;
			std::cout << "Enter total charges: ";
			std::cin >> totalCharge;
			std::cout << "Enter total credits: ";
			std::cin >> totalCredit;
			std::cout << "Enter credit limits: ";
			std::cin >> allowedLimit;
		}
	}

}