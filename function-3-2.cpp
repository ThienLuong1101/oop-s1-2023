#include<iostream>
#include <cmath>

int median_array(int array[], int n) {
    if (n < 1 || n%2 == 0)
    {
        return 0;
    }
    
    int median = (n-1)/2;
    int ans;
    
    for (int j = 0; j < n; j++)
    {   
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[j]>=array[i]&&j!=i)
            {
                count++;
            }
            
        }
        if (count == median)
        {
            ans = array[j];
            break;
        }
    }
    return ans;
}
