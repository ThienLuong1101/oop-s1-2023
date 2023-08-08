#include <iostream>

extern double arrayMax(double* array, int size);

int main() {
    double array[5] = {1,2,3,4,5};
    std::cout << arrayMax(array,5) << std::endl;
    return 0;
}