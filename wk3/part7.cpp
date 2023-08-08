#include <iostream>

extern double* dynamicArray(int size, double M);

int main() {
    int size = 5;
    double M = 10.0;
    double* array = dynamicArray(size, M);

    for (int i = 0; i < size; i++)
    {
        std::cout << *(array+i) << std::endl;
    }
    
    delete[] array;
    return 0;
}