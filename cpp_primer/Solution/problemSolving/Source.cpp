/* Problem #1: Find the Answer to Life, the Universe, and Everything */
#include <iostream>


int main(){
	int testCase;
	int n, x, y;

	std::cin >> testCase;

	while (testCase > 0) {
		std::cin >> n >> x >> y;

		for (int j = x; j < n; ++j) {
			if (j % x == 0 && j % y != 0)
				std::cout << j << " ";
		}
		std::cout << std::endl;
		testCase--;
	}

	return 0;
}