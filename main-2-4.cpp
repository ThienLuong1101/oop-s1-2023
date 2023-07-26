#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    bool result = is_ascending(array, n);

    if (result) {
        std::cout << "The array is in ascending order." << std::endl;
    } else {
        std::cout << "The array is NOT in ascending order." << std::endl;
    }

    return 0;
}