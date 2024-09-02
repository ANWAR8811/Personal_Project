#include <iostream>
#include <cmath>

using namespace std;

// bool prime(int n) {
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }


bool prime(int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (prime(n)) cout << "yes" << endl;
        else cout << "no" << endl; 
    }
    
}