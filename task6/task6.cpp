#include "task6.h"

//array output
void array(int n_us, float a[]) {
	for (int i = 0; i < n_us; i++)
		std::cout << a[i] << " ";
}

//reading and writing an array
void enter_us(float arr[]) {
	for (int i = 0; i < 14; i++) {
		float temp = 0;
		std::cin >> temp;
		arr[i] = temp;
	}
}

//Swap the first half with the second
void dividing(float arr[]) {

	int help_part = 7;
	int count = 0;

	for (int i = 0; i < help_part; i++) {
		float t = arr[i];
		arr[i] = arr[help_part + i];
		arr[help_part + i] = t;
		count++; //Determine the number of permutations made in this case
	}

	std::cout << "Modified array: ";
	array(14, arr);

	std::cout << std::endl << "Permutations: " << count;
}