//task7
#include "task7.h"

void enter_us(int arr[], int size_arr) {
	for (int i = 0; i < size_arr; i++) {
		int temp = 0;
		std::cin >> temp;
		arr[i] = temp;
	}
}

//Determine the number of local minima in a given numeric array
void n_locmin(int arr[], int size_arr) {

    enter_us(arr, size_arr);

    int count = 0;
    for (int i = 0; i < size_arr; i++)
    {
        if ((i == 0) && (arr[i] < arr[i + 1]))
            count++;
        else if ((i > 0) && (i < size_arr - 1) && (arr[i] < arr[i - 1]) && (arr[i] < arr[i + 1]))
            count++;
        else if ((i == size_arr - 1) && (arr[i] < arr[i - 1]))
            count++;
    }
    std::cout << "Number of local minimums : " << count << std::endl;
}