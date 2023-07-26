#include<iostream>

int max_element(int array[], int n) {
    if (n < 1)
    {
        return 0;
    }
    int biggest = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > biggest)
        {
            biggest = array[i];
        }
    }
    
    return biggest;
}
