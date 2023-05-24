#include <iostream>

using namespace std;

int countSafeSpots(char field[][25], int R, int C) {
    int count = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (field[i][j] == '.') {
                bool safe = true;

                // Check adjacent spots
                if (i > 0 && field[i-1][j] == '*')
                    safe = false;
                if (i < R-1 && field[i+1][j] == '*')
                    safe = false;
                if (j > 0 && field[i][j-1] == '*')
                    safe = false;
                if (j < C-1 && field[i][j+1] == '*')
                    safe = false;

                if (safe)
                    count++;
            }
        }
    }

    return count;
}

int main() {
    int R, C;
    cin >> R >> C;

    char field[25][25];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> field[i][j];
        }
    }

    int safeSpots = countSafeSpots(field, R, C);
    cout << safeSpots << endl;

    return 0;
}

