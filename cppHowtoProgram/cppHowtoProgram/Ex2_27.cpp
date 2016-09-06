#include <iostream>

using namespace std;

int ex2_27() {
	char a;

	cout << "Enter a character: ";
	cin >> a;

	cout << "Code: " << static_cast<int>(a) << endl;

	return 0;
}