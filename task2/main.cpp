#include "tasks.h"
#include <iostream>

int main() {

	//task2
	int n;
	std::cout << "Enter a number " << std::endl;
	std::cin >> n;
	std::cout << "Number of an array ellements: " << n << std::endl;

	cr_array(n);

	return 0;
}
