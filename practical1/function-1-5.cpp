#include <iostream>
// Sums together all positive numbers and returns them
int count_evens(int number){
    if (number < 1)
    {
        return 0;
    }
    int total = 0;
    for (int i = 2; i <= number; i= i + 2) {
        total++;
    }
    
    return total;
}
