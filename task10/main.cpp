#include "task10.h"

int main()
{
    int n, m;
    std::cout << "Size matrix1: "; std::cin >> n;
    std::cout << "Size matrix2: "; std::cin >> m;

    double* arrI = new double[n];
    double* maxI = 0;
    double* arrII = new double[m];
    double* maxII = 0;

    change_max(arrI, arrII, maxI, maxII, n, m);

}