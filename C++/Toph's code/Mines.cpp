#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<char>> grid(R, vector<char>(C));

    // Read the grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    // Iterate over each cell in the grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] != '*') {
                int count = 0;

                // Check adjacent cells for mines
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        int nx = i + dx;
                        int ny = j + dy;

                        // Skip out-of-bounds cells
                        if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
                            continue;
                        }

                        // Count mines
                        if (grid[nx][ny] == '*') {
                            count++;
                        }
                    }
                }

                // Update the cell with the count if it's not already a mine
                if (count > 0) {
                    grid[i][j] = count + '0';
                }
            }
        }
    }

    // Print the updated grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
