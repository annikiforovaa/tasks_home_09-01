#include "tasks.h"
#include <iostream>

//task2

void cr_array(int n_us) { //create an array of n integers
	int* a = new int[n_us];
	for (int i = 0; i < n_us; i++)
		a[i] = rand(); //random filling
	std::cout << "First version: ";
	for (int i = 0; i < n_us; i++)
		std::cout << a[i] << " ";
	
	//swap the first and last element
	int* pa = &a[0];
	int* pla = &a[n_us-1];
	int tmp = *pa;
	*pa = *pla;
	*pla = tmp;

	std::cout << std::endl << "Second version: ";
	for (int i = 0; i < n_us; i++)
		std::cout << a[i] << " ";

	delete a;
	delete pa;
	delete pla;
}




