#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> portals(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> portals[i];
    }

    int current_cell = 1; // Start from cell 1
    bool can_reach = false;

    // Traverse through the portals to see if we can reach cell t
    while (current_cell < t) {
        current_cell += portals[current_cell - 1]; // Move to the next cell using the portal
        if (current_cell == t) {
            can_reach = true;
            break;
        }
    }

    // Output the result
    if (can_reach) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
