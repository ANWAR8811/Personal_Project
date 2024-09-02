#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    // Sort the prices
    sort(prices.begin(), prices.end());

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int money;
        cin >> money;

        // Binary search to find the position of the first price greater than money
        int count = upper_bound(prices.begin(), prices.end(), money) - prices.begin();

        cout << count << endl;
    }

    return 0;
}








// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//   int n, q;
//   cin >> n;

//   vector<int> prices(n);
//   for (int i = 0; i < n; ++i) {
//     cin >> prices[i];
//   }

//   cin >> q;

//   for (int i = 0; i < q; ++i) {
//     int money;
//     cin >> money;

//     int count = 0;
//     for (int price : prices) {
//       if (money >= price) {
//         count++;
//       }
//     }

//     cout << count << endl;
//   }

//   return 0;
// }
