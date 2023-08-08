#include <iostream>
using namespace std;

extern void print_binary_str(std::string decimal_number);

int main() {
    string base_2 = "15" ;
    print_binary_str(base_2);
    return 0;
}
