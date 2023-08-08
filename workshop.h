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

void changeValue(double* ptr) {
    *ptr = 42;
}

void printArray( double* array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << *(array+i) << endl;
    }
}

double arrayMax( double* array, int size) {
    int max = *array;
    for (int i = 1; i < size; i++)
    {
        if (*(array+i) > max)
        {
            max = *(array+i);
        }
    }

    return max;
}
