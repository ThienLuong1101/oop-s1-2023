#include <iostream>
#include <cmath>

int main() {
    int digits[32]; // Assuming a 32-bit integer, adjust the size as needed
    int position = 0;
    int base_10 = 75;
    while (base_10 != 0)
    {
        digits[position] = base_10 % 2;
        base_10 = base_10 / 2;
        position++;
    }

    for (int i = position - 1; i >= 0; i--)
    {
        std::cout << digits[i];
    }
    std::cout << std::endl;
    return 0;

}
