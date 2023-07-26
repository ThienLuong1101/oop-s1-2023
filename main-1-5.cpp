#include <iostream>
<<<<<<< HEAD

=======
#include <iomanip>
>>>>>>> ad29919f0c68bd1a2ea5756c7ec2cd6eb2f18bb3

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int number);

int main() {
    int number;

    std:: cout << "Enter a number: ";
    std::cin >> number;
    
    int res = count_evens(number);
    std::cout <<  "there are " << res << " evens numbers from 1 to " << number << std::endl;

    return 0;
}
