#include <iostream>         //giving wrong answer... on codechef
#include <set>
#include <vector>

using namespace std;

set<int> s;

void countDivisors(long long n) {

    for (long long i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            long long x = i;
            long long y = n / i;

            s.insert(x);
            s.insert(y);
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        countDivisors(n);

        vector<long long> v;
        v.assign(s.begin(), s.end());

        if (k > v.size()) cout << -1 << endl;
        else cout << v[k-1] << endl;
    }
}