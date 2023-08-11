#include <iostream>
#include <math.h>
using namespace std;

extern int palindrome_sum(int integers[], int length);

int main(){
    int decimal[6] = {2,0,6,5,0,2};
    int answer = palindrome_sum(decimal, 6);
    cout << answer << endl;
    return 0;
}