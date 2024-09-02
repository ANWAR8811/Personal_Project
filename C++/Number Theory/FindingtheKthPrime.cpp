#include <iostream>
#include <vector>

using namespace std;

bool prime[90000001];
int limit = 90000000; // Renamed the global variable to 'limit'
vector<int> v;

void sieve() {
    for (int i = 2; i * i <= limit; i++) {
        if (prime[i] == false) {
            for (int j = i * i; j <= limit; j += i) {
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <= limit; i++) {
        if (prime[i] == false) v.push_back(i);
    }
}

int main() {
    sieve();

    int t;
    cin >> t;

    while (t--) {
        int userInput; // Renamed the variable used for user input
        cin >> userInput;

        cout << v[userInput - 1] << endl;
    }
    return 0;
}



// #include <iostream>              // shows time limit exceeded
// #include <vector>

// using namespace std;

// bool prime[90000001];
// int n = 90000000;
// vector<int> v;

// void sieve() {
//     for (int i = 2; i*i <= n; i++) {
//         if (prime[i] == false) {
//             for (int j = i*i; j <= n; j += i) {
//                 prime[j] = true;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++) {
//         if (prime[i] == false) v.push_back(i);
//     }
// }

// int main() {
//     sieve();

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         cout << v[n-1] << endl;
//     }
//     return 0;
// }