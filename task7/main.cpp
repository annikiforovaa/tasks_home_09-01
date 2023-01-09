#include "task7.h"

int main() {

    int* a;
    int size;
    std::cin >> size;

    a = new int[size];

    n_locmin(a, size);

    delete a;

    return 0;
}