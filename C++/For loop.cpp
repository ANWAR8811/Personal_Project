#include <iostream>
#include <string>

using namespace std;

int main() {
    int digit;
    string line;

    cout << "Enter any word: ";
    getline(cin, line);

    cout << "Enter a number: ";
    cin >> digit;

    for (int i = 0; i < digit; i++) {
        cout << line << endl;
    }

    return 0;
}
