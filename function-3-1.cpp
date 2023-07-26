#include<iostream>

bool is_fanarray(int array[], int n) {
    if (n < 1)
    {
        return false;
    }
    
    int left = 0;
    int right = n-1;
    bool ans = true;

    while (left < right)
    {   
        int left_gap = array[left+1]-array[left];
        int right_gap = array[right-1]-array[right];
        if (left_gap < 0 || right_gap < 0)
        {
            ans = false;
            break;
        }
        
        if (left_gap != right_gap)
        {
            ans = false;
            break;
        }
        left++;
        right--;
    }
    
    return ans;
}
