#include <iostream>
// Sums together all positive numbers and returns them
double sum_even(double array[], int n) {
    if (n < 1)
    {
        return 0;
    }
    double total = 0;
    for (int i = 0; i < n; i+=2) {
        total+= array[i];
        
    }
    return total;
}
