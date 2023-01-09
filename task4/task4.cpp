#include "task4.h"

void array(int n_us, float a[]) {
	for (int i = 0; i < n_us; i++)
		std::cout << a[i] << " ";
}

//Arrange the elements in descending order
void change_ar(int n_us, float a[]) {
	int cs = 0;
	for (int i = 0; i < n_us; i++) {
		for (int j = 0; j < n_us - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				float b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
				cs++; //Determine the number of permutations that occurred during this process
			}
		}
	}
	array(n_us, a);

	std::cout << std::endl << "Permutations = " << cs;
}