#include <iostream>

using namespace std;

int ex2_19() {
	int a, b, c;
	int largest, smallest;

	// ask for input
	cout << "Enter 3 integers: ";
	cin >> a >> b >> c;

	largest = a;
	smallest = a;

	if (b > largest) largest = b;
	if (c > largest) largest = c;

	if (b < smallest) smallest = b;
	if (c < smallest) smallest = c;

	cout << "Smallest = " << smallest << endl;
	cout << "Largest = " << largest << endl;

	return 0;
}