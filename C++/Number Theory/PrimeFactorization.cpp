#include <iostream>

using namespace std;

void primeFactors(int n) {
    for (int i = 2; i * i <= n; i++) {  // Start from i = 2
        if (n % i == 0) {
            int c = 0;
            
            while (n % i == 0) {
                c++;
                n /= i;
            }
            cout << i << "^" << c << ",";
        }
    }
    if (n > 1) cout << n << "^" << 1 << endl;
    else cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        primeFactors(n);
    }
    return 0;
}
