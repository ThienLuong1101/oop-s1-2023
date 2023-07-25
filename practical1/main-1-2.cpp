#include <iostream>
#include <iomanip>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double array_mean(int[], int);

int main() {
    int array[5] = {4,5,5,5,5};
    
    double res = array_mean(array,5);
    std::cout << std::fixed << std::setprecision(2)<< "The number is: " << res << std::endl;

    return 0;
}