#include <iostream>
using namespace std;

void printArray( double* array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << *(array+i) << endl;
    }
}
