#include <iostream>

extern void printArray( double* array, int size);

int main() {
    double array[5] = {1,2,3,4,5};
    printArray(array,5);

    return 0;
}