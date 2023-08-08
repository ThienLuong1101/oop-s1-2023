#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int base_2[30] = {1,1,1,0};
    cout << binary_to_int(base_2, 4) << endl;
    return 0;
}
