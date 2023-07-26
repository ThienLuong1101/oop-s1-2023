#include<iostream>

extern double weighted_average(int array[], int n);

int main() {
    int number = 6;
    int array[number] = {1,2,1,4,1,3};
    double res = weighted_average(array, number);
    std::cout<<"The weighted averages is: "<<res<<std::endl;
}