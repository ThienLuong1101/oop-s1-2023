#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};

    two_five_nine(array,5);

    return 0;
}