#include <iostream>
#include <cstring> // Include for memset

using namespace std;

int main() {
    int numbers[5]; // Array of integers

    // Using memset to initialize the array to 0
    memset(numbers, 0, sizeof(numbers));

    // Displaying the initialized array
    cout << "Initialized array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
