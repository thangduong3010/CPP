#include <iostream>
#include <iomanip>
#include "GasMileage.h"

void GasMileage::getMPG() {
	double miles;
	double gallons;
	double total_miles = 0;
	double total_gallons = 0;
	double trip_mpg;
	double total_mpg;

	std::cout << "Enter miles driven (-1 to quit): ";
	std::cin >> miles;
	if (miles != -1) {
		std::cout << "Enter gallons used: ";
		std::cin >> gallons;
	}

	while (miles != -1) {
		total_miles += miles;
		total_gallons += gallons;
		total_mpg = total_miles / total_gallons;
		trip_mpg = miles / gallons;
		std::cout << "MPG this trip: " << std::setprecision(6) << std::fixed << trip_mpg << std::endl;
		std::cout << "Total MPG: " << std::setprecision(6) << std::fixed << total_mpg << std::endl;

		std::cout << "Enter miles driven (-1 to quit): ";
		std::cin >> miles;
		if (miles != -1) {
			std::cout << "Enter gallons used: ";
			std::cin >> gallons;
		}	
	}
}
