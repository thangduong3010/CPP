#include <iostream>


int main(){
	int i = 42;
	int *ip = &i;
	int *pp = NULL;

	if (pp)
		std::cout << "Valid pointer" << std::endl;
	else
		std::cout << "Invalid pointer" << std::endl;

	return 0;
}