#include "task9.h"

int main() {
	//Entering an array consisting of 15 elements of an integer type
	int size = 15;
	int* arr = new int[size];
	int* otr_a = new int[size];

	std::cout << "Enter 15 elements of your array: " << std::endl;

	for (int i = 0; i < size; i++)
		std::cin >> arr[i];

	concl(size, arr);
   
	}
	


