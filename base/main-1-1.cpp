#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]) {
    // The implementation of the function (as shown above)
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int result = sum_diagonal(matrix);
    cout <<"Sum of diagonal elements: " <<result<< endl; 

    return 0;
}