#include <iostream>

using namespace std;

long long power(long long n, long long p, long long mod) {
    long long res = 1;

    while (p) {
        if (p % 2 == 1) {
            res = (res * n) % mod;
            p--;
        }
        else {
            n = (n * n) % mod;
            p /= 2;
        }
    }
    return res;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        long long n, p;
        cin >> n >> p;

        cout << power(n, p, 1e9) << endl; // modulus should be set here
    }
}