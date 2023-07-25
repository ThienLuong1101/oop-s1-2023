#include <iostream>
#include <iomanip>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int[], int,int number);

int main() {
    int number = 5;
    int array[5] = {4,5,5,5,5};
    
    int res = num_count(array,5,number);
    std::cout <<  "There are " << res << " are " << number << std::endl;

    return 0;
}