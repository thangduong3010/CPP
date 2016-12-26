#include <iostream>
#include "LargestSales.h"


void LargestSales::largestSales() {
	int counter = 1;
	int largest = 0;
	int runnerup = 0;
	int sales;

	while (counter <= 10) {
		std::cout << "Enter number of units sold: ";
		std::cin >> sales;

		if (sales > largest) {
			runnerup = largest;
			largest = sales;
		}
		else {
			if (sales > runnerup)
				runnerup = sales;
		}

		counter++;
	}
	std::cout << "The winner: " << largest << std::endl;
	std::cout << "The runner-up: " << runnerup << std::endl;
}