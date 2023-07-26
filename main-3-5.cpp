#include <iostream>


// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double sum_even(double array[], int n);

int main() {
    int number = 5;
    double array[5] = {4,5,5.5,5,5};
    
    double res = sum_even(array, number);
    std::cout <<  " the sum of the elements in the even positions " << res << std::endl;

    return 0;
}
