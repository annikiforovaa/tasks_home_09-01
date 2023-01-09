#include "task9.h"
//Arrange the array so that all negative numbers are located at the beginning 
//in ascending order, and all positive numbers are located at the end in descending order

void bubble_sort(int* a, int length) //sorting an array
{
    for (int i = 0; i < length - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < length - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void plusa(int size, int arr[]) { //creating the array of positive elements
    int count_positive(0);
    for (int i = 0; i < size; ++i){
        if (arr[i] >= 0)
            count_positive++;
    }

    int* b = new int[count_positive];
    count_positive = 0;
    for (int i = 0; i < size; ++i){
        if (arr[i] >= 0)
            b[count_positive++] = arr[i];
    }

    for (int i = 0; i < count_positive; i++) { //sorting this array
        for (int j = 0; j < count_positive - 1 - i; j++) {
            if (&b[j] < &b[j + 1]) {
                int t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;

            }
        }
    }

    for (int i = 0; i < count_positive; ++i)
        std::cout << b[i] << " ";

    delete b;
}

void otrich(int size, int arr[]) { //creatina the array of negative elements
    int count = 0;
    int* otr_a = new int[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            count++;
    }

    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            otr_a[k] = arr[i];
            k++;
        }
    }

    bubble_sort(otr_a, count); //sorting

    for (int i = 0; i < count; i++)
        std::cout << otr_a[i] << " ";

    delete otr_a;
}

void concl(int size, int arr[]) { //final function

    otrich(size, arr);

    plusa(size, arr);
    
}