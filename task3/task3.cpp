#include <iostream>
//task3
int main() {
	double** p = 0; //double pointer

	p = new double*; //allocate space in memory for the pointer and write address to 'p' 
	*p = new double; // dereferencing 'p', allocate space in memory, write variable of the pointer of 'double'
	**p = 2; //dereferencing and assigning a value '2'

	std::cout << **p << std::endl;

	delete* p;
	delete p;

	return 0;
}