#include <iostream>

using namespace std;

int main() {
    int digit;

    cout << "Enter a number: ";
    cin >> digit;

    for (int i=1; i<11; i++) {
        cout<< digit << "X" << i << "=" << (digit*i) <<endl;
        if (i==10) {
            break;
        }

    }
}


