#include <iostream>
#include <string>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Create a string to hold the array elements
    std::string output = "[";

    // Concatenate the array elements into the string
    for (int i = 0; i < size; i++) {
        output += std::to_string(arr[i]); // Convert each element to a string
        if (i != size - 1) {
            output += ", ";
        }
    }

    output += "]";

    // Print the array
    std::cout << output << std::endl;

    return 0;
}
