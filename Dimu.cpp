#include <iostream>

// Existing add function
double add_numbers(double a, double b) {
    return a + b;
}

// New multiply function
double multiply_numbers(double a, double b) {
    return a * b;
}

int main() {
    double num1, num2;

    // Example usage of the add function
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    double sum = add_numbers(num1, num2);
    double product = multiply_numbers(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << product << std::endl;

    return 0;
}

