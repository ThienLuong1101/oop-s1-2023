#include <iostream>
// Sums together all positive numbers and returns them
int count_evens(int number){
    if (number < 1)
    {
        return 0;
    }
    int total = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0)
        {
            total+= i;
        }
        
    }
    
    return total;
}