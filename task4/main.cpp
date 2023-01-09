//task4

#include "task4.h"

int main() {

	//Enter an array consisting of 12 elements of a valid type
	int n_us = 12;
	float* a = new float[n_us];

	std::cout << "Enter 12 elements of your array: " << std::endl;

	for (int i = 0; i < n_us; i++)
		std::cin >> a[i];

	std::cout << std::endl << "Original version: ";
	array(n_us, a);
	std::cout << std::endl;

	std::cout << "Final version: ";
	change_ar(n_us, a);
	std::cout << std::endl;

	delete a;
	return 0;
}

