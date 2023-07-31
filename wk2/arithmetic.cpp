#include <iostream>
#include <cmath>

// Function to convert a base-10 number to base-2 and print it
void base_10_to_2(int base_10) {
    int digits[32]; // Assuming a 32-bit integer, adjust the size as needed
    int position = 0;

    while (base_10 != 0) {
        digits[position] = base_10 % 2;
        base_10 /= 2;
        position++;
    }

    for (int i = position - 1; i >= 0; i--) {
        std::cout << digits[i];
    }
    std::cout << std::endl;
}

// Function to convert a base-2 number to base-10
int base_2_to_10(unsigned long int base_2) {
    int num = 0;
    int position = 0;

    while (base_2 > 0) {
        int last = base_2 % 10;
        num += last * pow(2, position);
        position++;
        base_2 /= 10;
    }

    return num;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int main() {
    unsigned long int num1, num2;

    std::cout << "Enter number1 (base2): ";
    std::cin >> num1;

    std::cout << "Enter number2 (base2): ";
    std::cin >> num2;

    int ans1 = base_2_to_10(num1);
    int ans2 = base_2_to_10(num2);

    int sum = add(ans1, ans2);
    int sub = subtract(ans1, ans2);

    std::cout << "sum (base2): ";
    base_10_to_2(sum);
    std::cout << "subtract (base2): ";
    base_10_to_2(sub);

    return 0;
}
