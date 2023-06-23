#include <iostream>
#include <string>

int main() {
    int number;
    std::string text;

    // Input number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Input string
    std::cout << "Enter a string: ";
    std::cin.ignore();  // Ignore the newline character left in the input buffer
    std::getline(std::cin, text);

    // Print the inputs
    std::cout << "Number: " << number << std::endl;
    std::cout << "String: " << text << std::endl;

    return 0;
}
