#include <iostream>
// Sums together all positive numbers and returns them
int count_evens(int number){
    if (number < 1)
    {
        return 0;
    }
<<<<<<< HEAD
    int total = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0)
        {
            total+= i;
=======
    int sum = 0;
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0)
        {
            sum++;
>>>>>>> ad29919f0c68bd1a2ea5756c7ec2cd6eb2f18bb3
        }
        
    }
    
<<<<<<< HEAD
    return total;
}
=======
    return sum;
}
>>>>>>> ad29919f0c68bd1a2ea5756c7ec2cd6eb2f18bb3
