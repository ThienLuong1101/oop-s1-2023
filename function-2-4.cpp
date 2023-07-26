#include<iostream>

bool is_ascending(int array[], int n) {
    if (n < 1)
    {
        return false;
    }
    bool ans = true;
    int temp = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] >= temp)
        {
            temp = array[i];
        }
        else
        {
            ans = false;
            break;
        }
   }

   return ans;
}
