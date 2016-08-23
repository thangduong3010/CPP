#include <iostream>


int main(){
	int i = 42;
	int &r = i;
	int *p = &i;
	int &r1 = *p;
	
	std::cout << i << std::endl; // * yields the object to which p points; print 42
	std::cout << r << std::endl;
	std::cout << p << std::endl;
	std::cout << r1 << std::endl;

	return 0;
}