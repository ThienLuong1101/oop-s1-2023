#include <iostream>
// Sums together all positive numbers and returns them
int array_sum(int array[], int n) {
    if (n < 1)
    {
        return 0;
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            total += array[i];
        }
    }

    return total;
}
