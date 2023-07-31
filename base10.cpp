#include <iostream>
#include <cmath>

int base_10_to_2(unsigned long int base_2) {
   
    int digits[32]; // Assuming a 32-bit integer, adjust the size as needed
    int last = 0;
    int position = 0;
    int num = 0;

    while (base_2 > 0)
    {
        last = base_2 % 10;
        num += last * pow(2,position);
        position++;
        base_2 /= 10;
    }

    return num;
}
