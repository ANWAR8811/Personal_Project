#include <iostream>

using namespace std;

int modularExponentiation(int base, int exponent, int modulus) {
    if (modulus == 1) {
        return 0;
    }

    int result = 1;
    base %= modulus;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (1LL * result * base) % modulus;
        }
        exponent /= 2;
        base = (1LL * base * base) % modulus;
    }
    return result;
}

int calculateSum(int n, int modulus) {
    long long sum = (1LL * n * (n+1)) % modulus;
    sum = (sum * (modulus + 1) / 2) % modulus;
    return static_cast<int>(sum);
}

int main() {
    int n;
    cin >> n;

    int a = calculateSum(n, 1000000007);

    int b = modularExponentiation(n, n, 1000000007);

    int c = 1;
    for (int i = 1; i < n+1; ++i)
    {
        c = (1LL * c * i) % 1000000007;
    }

    int d = (modularExponentiation(2, n, 1000000007) + modularExponentiation(3, n, 1000000007)) % 1000000007;

    cout << a << " " << b << " " << c << " " << d << endl;
    
}



// #include <iostream>

// // Function to calculate modular exponentiation
// int modularExponentiation(int base, int exponent, int modulus) {
//     if (modulus == 1) {
//         return 0;
//     }

//     int result = 1;
//     base %= modulus;

//     while (exponent > 0) {
//         if (exponent % 2 == 1) {
//             result = (1LL * result * base) % modulus;
//         }
//         exponent /= 2;
//         base = (1LL * base * base) % modulus;
//     }

//     return result;
// }

// // Function to calculate sum of 1 to n using modular arithmetic
// int calculateSum(int n, int modulus) {
//     long long sum = (1LL * n * (n + 1)) % modulus;
//     sum = (sum * (modulus + 1) / 2) % modulus;
//     return static_cast<int>(sum);
// }

// int main() {
//     int n;
//     std::cin >> n;

//     // Calculate a
//     int a = calculateSum(n, 1000000007);

//     // Calculate b using modular exponentiation
//     int b = modularExponentiation(n, n, 1000000007);

//     // Calculate c
//     int c = 1;
//     for (int i = 1; i <= n; ++i) {
//         c = (1LL * c * i) % 1000000007;
//     }

//     // Calculate d using modular exponentiation
//     int d = (modularExponentiation(2, n, 1000000007) + modularExponentiation(3, n, 1000000007)) % 1000000007;

//     // Print the results
//     std::cout << a << " " << b << " " << c << " " << d << std::endl;

//     return 0;
// }




// #include <iostream>
// #include <cmath>

// using namespace std;

// const int MOD = 1000000007;

// int main() {
//     int n, a=0, b, c=1, d;
//     cin >> n;

//     int t = n;
//     while (n > 0) {
//         a += n % MOD;
//         c *= n % MOD;
//         n--;
//     }
//     b = (pow(t,t)) % MOD;
//     d  = (pow(2, t) + pow(3, t)) % MOD;
//     cout<< a << " " << b << " " << c << " " << d <<endl;

// }