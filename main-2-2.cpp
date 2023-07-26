#include <iostream>

extern int max_element(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};

    int ans = max_element(array,5);

    std::cout<<"The biggest number in list: "<< ans <<std::endl;
    return 0;
}