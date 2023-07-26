#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {1,2,1,2,1};

    bool ans = is_fanarray(array, 5);

    if (ans) {
        std::cout << "true." << std::endl;
    } else {
        std::cout << "false." << std::endl;
    }
    
    return 0;
}