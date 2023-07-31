#include <iostream>

using namespace std;

int main() {
    int *ptr, i;
    i = 11;

    ptr = &i;

    cout << "value of ptr: " << ptr <<endl;

    cout << "value of i: " << *ptr << endl;

    return 0;
}