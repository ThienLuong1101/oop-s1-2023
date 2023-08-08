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


int main() {
    double num = 7;
    std::cout << "part2" << std::endl;
    std::cout << num << std::endl;
    changeValue(&num);
    std::cout << num << std:: endl;

    std::cout << "part3" << std::endl;
    double arrayb[5] = {1,2,3,4,5};
    printArray(arrayb,5);

    std::cout << "part4" << std::endl;
    std::cout << arrayMax(arrayb,5) << std::endl;

    int size = 5;
    double M = 10.0;
    double* arrayt = dynamicArray(size, M);

    std::cout << "part7" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << *(arrayt+i) << std::endl;
    }
    
    delete[] arrayt;

    return 0;
}