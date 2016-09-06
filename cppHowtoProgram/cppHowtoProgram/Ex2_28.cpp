#include <iostream>

using namespace std;

int main() {
	int num;
	int a;
	int count = 10000;

	cout << "Enter a five-digit integer: ";
	cin >> num;

	for (int i = 0; i < 5; ++i) {
		a = num / count;
		cout << a << "   ";
		
		num %= count;
		count /= 10;
	}
	cout << endl;

	return 0;
}