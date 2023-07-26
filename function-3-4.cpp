#include <iostream>

void print_pass_fail(char grade) {
    switch (grade) {
    case 'D':
    case 'E':
        std::cout << "Fail" << std::endl;
        break;
    case 'A':
    case 'B':
    case 'C':
        std::cout << "Pass" << std::endl;
        break;
    default:
        std::cout << "Nothing" << std::endl;
        break;
    }
}
