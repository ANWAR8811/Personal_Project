#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int Xi, Yi;
        cin >> Xi >> Yi;

        int average = (Xi + Yi) / 2;
        if (average % 2 == 0) {
            cout << "Sadia will be happy." << endl;
        } else {
            cout << "Oops!" << endl;
        }
    }

    return 0;
}
