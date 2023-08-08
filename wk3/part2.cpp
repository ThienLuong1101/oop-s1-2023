#include <iostream>

extern void changeValue(double* ptr);

int main() {
    double num = 7;
    std::cout << num << std::endl;
    changeValue(&num);
    std::cout << num << std:: endl;
    return 0;
}