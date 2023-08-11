#include <iostream>
#include <math.h>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    int decimal[4] = {0,0,1,1};
    int answer = bin_to_int(decimal, 4);
    cout << answer << endl;
    return 0;
}