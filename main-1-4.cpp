#include <iostream>
#include <iomanip>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int number = 5;
    int array[5] = {4,5,5,5,5};
    int secondarray[5] = {4,4,4,4,3};
    
    int res = sum_two_arrays(array, secondarray, number);
    std::cout <<  "the total of 2 lists: " << res << std::endl;

    return 0;
}