#include <iostream>
using namespace std;

double* dynamicArray(int size, double M) {
    double* arr = new double[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = M;
    }

    return arr;
}
