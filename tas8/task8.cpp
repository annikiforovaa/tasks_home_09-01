//For each row of the matrix, calculate the sum of the elements enclosed between these two zeros
#include "task8.h"

void sort_matrix(int ncol, int nlines, int a[]) {

    int sum = 0;
    int count = 0;
    //finding two 0
    for (int i = 0; i < nlines; i++) {
        for (int j = 0; j < ncol; j++) {
            if (count == 1) {
                sum += a[i * ncol + j]; //summ of numbers
            }
            if (a[i * ncol + j] == 0) {
                if (count >= 0) {
                    count++;
                }
                if (count == 2) {
                    break;
                }
            }
        }
        std::cout << "Line " << i << ": sum = " << sum << "\n";
        sum = 0;
        count = 0;
    }
}