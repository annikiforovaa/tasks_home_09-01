//Enter two arrays of real numbers. Determine the maximum elements in each array and swap them.

#include "task10.h"

//output array
void enter_ar(int n, double arr[]) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}
void change_max(double arrI[], double arrII[], double* maxI, double* maxII, int n, int m) {
    for (int i = 0; i < n; i++)
    {
        arrI[i] = rand() % 100; //random filling
        std::cout << arrI[i] << " ";
        if (i == 0 || arrI[i] > *maxI)
            maxI = &arrI[i];
    }
    std::cout << "  " << "MAX =" << *maxI << "\n";

    for (size_t i = 0; i < m; i++)
    {
        arrII[i] = rand() % 100; //random filling
        std::cout << arrII[i] << " ";
        if (i == 0 || arrII[i] > *maxII)
            maxII = &arrII[i];
    }
    std::cout << "  " << "MAX =" << *maxII;


    //swap
    double* pI = maxI;
    double* pII = maxII;
    int tmp = *pI;
    *pI = *pII;
    *pII = tmp;

    std::cout << std::endl << "Second version of the first array: ";
    enter_ar(n, arrI);

    std::cout << std::endl << "Second version of the second array: ";
    enter_ar(m, arrII);
}