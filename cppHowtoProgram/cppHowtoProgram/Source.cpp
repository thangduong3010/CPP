#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "GradeBook.h"
#include "Account.h"
#include "Invoice.h"
#include "Employee.h"
#include "Date.h"
#include "HeartRates.h"
#include "HealthProfile.h"
#include "GasMileage.h"
#include "CreditLimit.h"
#include "SalaryCalculator.h"
#include "LargestSales.h"

int phoneCall(int, int, int, int);

int main()
{
	std::cout << "Time: " << phoneCall(3, 1, 2, 20) << std::endl;

	return 0;
}

int phoneCall(int min1, int min2_10, int min11, int s) {
	int CallCounter = 1;
	int CallTime = 0;

	// as long as we have money left :)
	while (s > 0) {
		if (CallTime == 1) {
			s -= min1;
		}
		if (CallTime >= 2 && CallTime <= 10) {
			s -= min2_10;
		}
		if (CallTime >= 11) {
			s -= min11;
		}
		if (s > 0)
		{
			CallCounter++;
			CallTime++;
		}
	}
	return CallTime;
}