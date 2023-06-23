#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> a;
    int c = 0;
    
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        a.push_back(input);
        
        int x = a[i].length();
        if (c < x) {
            c = x;
        }
    }
    
    for (int j = 0; j < n; j++) {
        int m = a[j].length() - 1;
        cout<< "M: " << m;
        
        string p;
        if (m == 1) {
            p = a[j] + 'a';
        } else if (m % 2 == 0) {
            p = a[j];
        } else {
            p = a[j].substr(0, m);
        }
        
        int s = (c - p.length()) / 2;
        cout << string(s, ' ') << p << endl;
    }

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int n, c = 0;
//     cin>>n;

//     string a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         int x = a[i].length();
//         if (c < x) {
//             c = x;
//         }
//     }


    
// }