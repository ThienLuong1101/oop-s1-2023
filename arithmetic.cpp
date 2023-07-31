#include<iostream>
using namespace std;
using big = unsigned long int;

extern int base_10_to_2(unsigned long int base_2);
extern void base_2_to_10(int base_10);
extern int add(int num1, int num2);
extern int subtract(int num1, int num2);
int main() {
    big num1;
    big num2;

    cout << "Enter number1 (base2): ";
    cin >> num1;

    cout << "Enter number2 (base2): ";
    cin >> num2;

    int ans1 = base_10_to_2(num1);
    int ans2 =  base_10_to_2(num2);
    cout << ans1 << ans2 <<endl;
    int sum = add(ans1, ans2);
    int sub = subtract(ans1, ans2);
    cout << "sum (base2): ";
    base_2_to_10(sum);
    cout << "subtract (base2): ";
    base_2_to_10(sub);
    
    return 0;
}