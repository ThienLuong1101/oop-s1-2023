#include <iostream>
using namespace std;

extern int sum_if_palindrome(int intergers[], int length);
extern bool is_palindrome(int intergers[], int length);
extern int sum_array_elements(int intergers[], int length);

int main() {
    int array[6] = {1,2,3,3,2,1};

    if (is_palindrome(array,6))
    {
        cout << "sum: " << sum_if_palindrome(array,6) << endl;
    }
    else
    {
        cout << "it is not palindrome" << endl;
    }
    
    return 0;
}

