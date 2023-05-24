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

    int i = 0;
    while (i < digit) {
        cout<< line << endl;
        i++;
    }
}

