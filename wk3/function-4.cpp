#include <iostream>
using namespace std;

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
