#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;
    vector<int> primes;

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0) {
            primes.push_back(i);
            n /= i;
        }
    }

    unordered_set<int> uniquePrimes(primes.begin(), primes.end());
    vector<int> sortedPrimes(uniquePrimes.begin(), uniquePrimes.end());
    sort(sortedPrimes.begin(), sortedPrimes.end());

    string exp = to_string(temp) + " = ";

    for (int prime : sortedPrimes) {
        exp += to_string(prime) + " ^ " + to_string(count(primes.begin(), primes.end(), prime)) + " * ";
    }

    exp = exp.substr(0, exp.length() - 3);

    cout << exp << endl;

    return 0;
    
}



// #include <iostream>
// #include <vector>
// #include <unordered_set>
// #include <algorithm>

// int main() {
//     int n;
//     std::cin >> n;
    
//     int temp = n;
//     std::vector<int> primes;
    
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             primes.push_back(i);
//             n /= i;
//         }
//     }
    
//     std::unordered_set<int> uniquePrimes(primes.begin(), primes.end());
    
//     std::vector<int> sortedPrimes(uniquePrimes.begin(), uniquePrimes.end());
//     std::sort(sortedPrimes.begin(), sortedPrimes.end());
    
//     std::string exp = std::to_string(temp) + " = ";
    
//     for (int prime : sortedPrimes) {
//         exp += std::to_string(prime) + " ^ " + std::to_string(std::count(primes.begin(), primes.end(), prime)) + " * ";
//     }
    
//     exp = exp.substr(0, exp.length() - 3);
    
//     std::cout << exp << std::endl;
    
//     return 0;
// }
