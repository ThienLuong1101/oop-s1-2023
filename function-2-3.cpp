#include <iostream>
#include <math.h>
using namespace std;

int sum_integers(int integers[], int length) {
    if (length < 1)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += integers[i];
    }
    
    return sum;
}

bool is_array_palindrome(int integers[], int length) {
     if (length < 1)
    {
        return -1;
    }
    int left = 0;
    int right = length-1;
    while (left<right)
    {
        if (integers[left] != integers[right])
        {
            return false;
            break;
        }
        left++;
        right--;
    }

    return true;
    
}

int palindrome_sum(int integers[], int length) {
    if (length < 1)
    {
        return -1;
    }
    
    if(is_array_palindrome(integers, length)) {
        return sum_integers(integers, length);
    }
    else
    {
        return -2;
    }
    
    
}