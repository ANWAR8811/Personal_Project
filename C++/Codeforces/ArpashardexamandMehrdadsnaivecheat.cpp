#include <iostream>

using namespace std;

int power(int base, int n, int m) {
    int res = 1;

    while (n) {
        if (n % 2 == 1) {
            res = (res * base) % m;
            n--;
        }
        else {
            base = (base * base) % m;
            n /= 2;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    cout << power(8, n, 10) << endl;
}