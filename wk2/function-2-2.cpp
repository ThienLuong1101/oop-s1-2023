#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int num = 0;
    int index = 0;
    for (int i = number_of_digits-1; i >= 0; i--)
    {
        num += binary_digits[i]*pow(2,index);
        index++;
    }
    
    return num;
}