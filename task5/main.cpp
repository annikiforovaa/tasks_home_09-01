//task5
#include "task5.cpp"
#include "task5.h"
int main()
{
    //create three arrays
    const int size_f = 10;
    int arr[size_f] = { 1,2,3,-5,-4,4,5,-3,-2,-1 };
    int res_I[size_f] = { 0 };
  
    std::cout << "I";
    std::cout << std::endl << "Original array: ";
    array(size_f, arr);

    sort_arr(arr, res_I, size_f);


    const int size_s = 8;
    int arrII[size_s] = { -4,20,-1,-5,15,7,0,-3};
    int res_II[size_s] = { 0 };

    std::cout << std::endl << "II";
    std::cout << std::endl << "Original array: ";
    array(size_s, arrII);

    sort_arr(arrII, res_II, size_s);


    const int size_t = 20;
    float arrIII[size_t] = { 0.5, -15, 9.88, -0.7, 4, 9, -3, 6.2, -7.09, 90, 16, -16.7, 56.9, 99.9, 1.5, -12.5, 44, 111.9, 9.0, -2 };
    float res_III[size_t] = { 0 };

    std::cout << std::endl << "III";
    std::cout << std::endl << "Original array: ";
    array(size_t, arrIII);

    sort_arr(arrIII, res_III, size_t);
}