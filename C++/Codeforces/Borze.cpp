#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> v;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '-' && i + 1 < str.size()) {
            if (str[i + 1] == '.') {
                v.push_back(1);
                ++i;
            } else if (str[i + 1] == '-') {
                v.push_back(2);
                ++i;
            }
        } else {
            v.push_back(0);
        }
    }

    for (int val : v) {
        cout << val;
    }

    return 0;
}
