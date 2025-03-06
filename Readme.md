#include <iostream>

int main() {
    double num1, num2, sum;

    // Prompt the user to enter two numbers


    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculate the sum


    sum = num1 + num2;


    // Display the result


    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}
