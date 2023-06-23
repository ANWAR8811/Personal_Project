#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    vector<vector<int>> arr(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> dp(n + 1, vector<int>(c + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++) {
            int weight = arr[i - 1][0];
            int value = arr[i - 1][1];      //--> Jhamela ase ami kisu bujhi na

            if (weight <= j) {
                dp[i][j] = max(dp[i - 1][j], value + dp[i - 1][j - weight]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][c] << endl;

    return 0;
}
