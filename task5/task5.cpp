//5) ���������� �������� ����������� ������� � ������ ������ ������ �� ������� ��������� �������:
//������� ������ ���� ��� ������������� �������� ��������� �������, � ����� ��� ���������. 
//������������ ������ ���� ������ �� ��������� �������. 
//��������� ��� ������� ����� ������������� � ����� ������������� ��������� � �������������� �������, 
//������� ��� � �������� �������. ��������� ������ �������� � ���� �������� ��������.

#include "task5.h"

template <typename T>
void array(int n_us, T a[]) {
    for (int i = 0; i < n_us; i++)
        std::cout << a[i] << "  ";
}

//Rewrite the elements of a one-dimensional array into another array of the same size
template <typename T>
void sort_arr(T arr[], T res[], int size) {

    int left = 0;
    int right = size;

    //first, all the negative elements of the original array should go, and then all the others
    //Keep the same order among positive and among negative elements
    for (int j = 0; j < size; ++j) {
        if (arr[j] < 0)
            res[left++] = arr[j];
        if (arr[size - j - 1] >= 0)
            res[--right] = arr[size - j - 1];
    }
    std::cout << std::endl << "Result array: ";
    array(size,res);
}

