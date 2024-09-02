#include <iostream>
using namespace std;

// Function to find the greatest common divisor
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the maximum balance
int maxBalance(int x, int n) {
    // If n is greater than x, the maximum balance is 1
    if (n >= x) return 1;
    // The maximum balance in this scenario is the greatest divisor of x that is less than or equal to x/n
    // This is because we are looking for the largest possible GCD among all possible sub-problems
    int maxGCD = 1;
    for (int i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            // Check if this divisor is a candidate for maximum GCD
            if (i <= x / n) maxGCD = max(maxGCD, i);
            if (x / i <= x / n) maxGCD = max(maxGCD, x / i);
        }
    }
    return maxGCD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        cout << maxBalance(x, n) << endl;
    }
    return 0;
}






// #include <iostream>
// using namespace std;

// // Function to find the maximum balance
// int maxBalance(int x, int n) {
//     // If x is divisible by n, the maximum balance is x/n
//     if (x % n == 0) {
//         return x / n;
//     } else {
//         // Otherwise, find the largest divisor of x that is less than or equal to x/n
//         for (int i = x / n; i >= 1; i--) {
//             if (x % i == 0) {
//                 return i;
//             }
//         }
//     }
//     return 1; // In the worst case, the GCD is 1
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x, n;
//         cin >> x >> n;
//         cout << maxBalance(x, n) << endl;
//     }
//     return 0;
// }