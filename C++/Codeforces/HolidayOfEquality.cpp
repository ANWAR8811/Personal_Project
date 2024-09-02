#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> welfare(n);

    for (int i = 0; i < n; ++i) {
        cin >> welfare[i];
    }

    // Find the maximum welfare among all citizens
    int maxWelfare = *max_element(welfare.begin(), welfare.end());

    // Calculate the total amount of money needed to equalize the welfare
    int totalExpense = 0;
    for (int i = 0; i < n; ++i) {
        totalExpense += maxWelfare - welfare[i];
    }

    cout << totalExpense << endl;

    return 0;
}