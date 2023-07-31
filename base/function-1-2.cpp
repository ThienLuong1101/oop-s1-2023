#include <iostream>

bool is_identity(int array[10][10]){
    int sum = 0;
    int diag = 0;
    int bug = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i][i] == 1)
        {
            diag++;
        }
        
        for (int j = 0; j < 10; j++)
        {
            if (i != j)
            {
                if (array[i][j] != 0)
                {
                    bug++;
                }
                
            }
            
        }
        
    }

    if (diag == 10 && bug == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}