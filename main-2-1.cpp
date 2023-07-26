#include <iostream>

extern int min_element(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};

    int ans = min_element(array,5);

    std::cout<<"The smallest number in list: "<< ans <<std::endl;
    return 0;
}