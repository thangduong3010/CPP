#include <iostream>
#include "GradeBook.h"
#include "Account.h"
#include "Invoice.h"
#include "Employee.h"
#include "Date.h"
#include "HeartRates.h"
#include "HealthProfile.h"

using namespace std;

int main() {
	/* test 1 */
	cout << "================= TEST 1 ==================" << endl;
	GradeBook gradeBook1("CS101 Intro to C++", "David Malan");
	
	gradeBook1.displayMessage();
	

	/* Test 2 */
	cout << "================= TEST 2 ==================" << endl;
	Account acc1(1000);
	Account acc2(5000);

	cout << "Balance 1: " << acc1.getBalance() << endl;
	cout << "Balance 2: " << acc2.getBalance() << endl;

	acc1.credit(250);
	cout << "Balance 1: " << acc1.getBalance() << endl;

	acc1.debit(2000);
	cout << "Balance 1: " << acc1.getBalance() << endl;

	acc2.debit(1250);
	cout << "Balance 2: " << acc2.getBalance() << endl;
	

	/* Test 3 */
	cout << "================= TEST 3 ==================" << endl;
	Invoice inv1("28T-2946", "This is a marvelous pencil", 5, 2);
	Invoice inv2("XXX", "This is a marvelous pornography", -2, -20);

	cout << "Part No: " << inv1.getPartNo() << endl;
	cout << "Part Description: " << inv1.getPartDesc() << endl;
	cout << "Quantity: " << inv1.getQuantity() << endl;
	cout << "Price per item: " << inv1.getPrice() << endl;
	cout << "Invoice amount = " << inv1.getInvoiceAmount() << endl;
	cout << endl;
	cout << "Part No: " << inv2.getPartNo() << endl;
	cout << "Part Description: " << inv2.getPartDesc() << endl;
	cout << "Quantity: " << inv2.getQuantity() << endl;
	cout << "Price per item: " << inv2.getPrice() << endl;
	cout << "Invoice amount = " << inv2.getInvoiceAmount() << endl;

	cout << "Thank you and Goodbye" << endl;
	
	/* Test 4 */
	cout << "================= TEST 4 ==================" << endl;
	Employee emp1("Thang", "Duong", 1000);
	Employee emp2("John", "Doe", -100);

	cout << "Thang's annual salary: " << emp1.getAnnualSalary() << endl;
	cout << "Raise 10%" << endl;

	emp1.raiseSalary(10);
	cout << "Thang's annual salary: " << emp1.getAnnualSalary() << endl;
	cout << endl;
	cout << "John's annual salary: " << emp2.getAnnualSalary() << endl;
	cout << "Raise 10%" << endl;

	emp2.raiseSalary(10);
	cout << "John's annual salary: " << emp2.getAnnualSalary() << endl;

	/* Test 5 */
	cout << "================= TEST 5 ==================" << endl;

	Date date1(10, 30, 1993);
	Date date2(20, 23, 2016);

	cout << "Date 1: ";
	date1.displayDate();
	cout << "Date 2: ";
	date2.displayDate();

	/* Test 6 */
	cout << "================= TEST 6 ==================" << endl;

	HeartRates c_rate1("Thang", "Duong", 30, 10, 1993);
	int l_day1, l_month1, l_year1;

	cout << "Hello! Please enter today's date (dd/mm/yyyy): ";
	cin >> l_day1 >> l_month1 >> l_year1;

	c_rate1.setCurrentYear(l_year1);
	c_rate1.displayInfor();
	cout << "Age: " << c_rate1.getAge() << endl;
	cout << "Maximum heart rate: " << c_rate1.getMaximumHeartRate() << endl;
	cout << "Target heart rate: " << c_rate1.getTargetHeartRate() << endl;

	/* Test 7 */
	cout << "================= TEST 7 ==================" << endl;

	HealthProfile prof1("Thang", "Duong", 30, 10, 1993, "Male", 70, 143);
	int l_day, l_month, l_year;

	cout << "Hello! Please enter today's date (dd/mm/yyyy): ";
	cin >> l_day >> l_month >> l_year;

	prof1.setCurrentYear(l_year);
	prof1.displayInfor();
	cout << "Age: " << prof1.getAge() << endl;
	cout << "Maximum heart rate: " << prof1.getMaximumHeartRate() << endl;
	cout << "Target heart rate: " << prof1.getTargetHeartRate() << endl;
	cout << "BMI: " << prof1.getBMI() << endl;
	prof1.displayBMIChart();

	return 0;
}