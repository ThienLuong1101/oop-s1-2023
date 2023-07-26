#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    bool result = is_descending(array, n);

    if (result) {
        std::cout << "The array is in descending order." << std::endl;
    } else {
        std::cout << "The array is NOT in descending order." << std::endl;
    }

    return 0;
}