#include<iostream>
#include <algorithm> // For std::sort

double weighted_average(int array[], int n) {
    if (n < 1)
    {
        return 0;
    }
    double sum = 0;
    std::sort(array, array + n);
    int index = 0;
    while (index < n)
    {
        int curr = array[index];
        int count = 1;

        while (curr == array[index+1])
        {
            index++;
            count++;
        }

        sum += curr*count*count;
        index++;
        
    }
    
    double ans = sum/n;
    return ans;
}