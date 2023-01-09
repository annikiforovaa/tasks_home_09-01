#include "task1.h"

template <typename T>
void this_swap(T a, T b) { //the swap function changes the values of the passed arguments
T temp = a; //creating temporary variable
	a = b;
	b = temp;
	std::cout << "The result of this function: a = " << a << ", b = " << b << std::endl;
}