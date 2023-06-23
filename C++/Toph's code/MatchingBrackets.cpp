#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t = "", g = "";
    cin >> s;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            t += c;
        } else {
            char k = t[t.length() - 1];
            g += c;
            if (c == ')' && k == '(') {t.pop_back(); g.pop_back();}
            else if (c == '}' && k == '{') {t.pop_back(); g.pop_back();}
            else if (c == ']' && k == '[') {t.pop_back(); g.pop_back();}
            else break;
        }
    }
    if (t.empty() && g.empty()) cout<< "Yes";
    else cout << "No" ;

    return 0;
}



// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s, t="", g="";
//     cin>> s;

//     for (char c : s) {
//         if (c=='(' || c=='{' || c='[') t += c;
//         else g += c;
//     }

//     cout<<t+g;
// }