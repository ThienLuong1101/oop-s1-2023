#include <iostream>
#include <cmath>

int sum_array_elements(int intergers[], int length){
    int sum = 0;

    if (length < 0)
    {
        return -1;
    }

    for (int i = 0; i < length; i++)
    {
        sum += intergers[i];
    }
    
    return sum;
}
bool is_palindrome (int intergers[], int length) {
    if (length < 0)
    {
        return -1;
    }
    
    int left = 0;
    int right = length - 1;
    while (left < right)
    {
        if (intergers[left] == intergers[right])
        {
            left++;
            right--;
        }
        else
        {
            return false;
            break;
        }  
    }
    
    return true;
    
}
int sum_if_palindrome(int intergers[], int length){
    if (length < 0)
    {
        return -1;
    }

    if (is_palindrome(intergers,length))
    {
        return sum_array_elements(intergers,length);
    }
    else
    {
        return -2;
    }
    
}
