#include <iostream>

extern int median_array(int array[], int n);

int main() {
    int array[5] = {3,5,2,1,4};

    int ans = median_array(array, 5);

    std::cout<<ans<<std::endl;
    
    return 0;
}