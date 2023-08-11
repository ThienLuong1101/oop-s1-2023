#include <iostream>
#include <math.h>
using namespace std;

extern void print_matrix(int array[10][10]);

int main(){
    int decimal[10][10] = {{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},};
    print_matrix(decimal);
    return 0;
}