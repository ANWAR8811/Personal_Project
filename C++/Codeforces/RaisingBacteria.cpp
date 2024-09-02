#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int count = 0;

    // Use bitwise operation to count the number of 1s in the binary representation of x
    // Each 1 represents a day you need to add bacteria because it's a power of 2 that contributes to the total
    while (x > 0) {
        count += x & 1; // Increment count if the current bit is 1
        x >>= 1; // Right shift x by 1 to check the next bit
    }

    cout << count << endl;

    return 0;
}