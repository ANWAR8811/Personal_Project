#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, c, m;
    cin >> n >> c >> m;

    string verdict = "AC";  // Initialize overall verdict as "AC"
    for (int i = 0; i < n; i++) {
        int di, cp, me;
        cin >> di >> cp >> me;

        if (cp > c) {
            verdict = "CLE";  // CPU Limit Exceeded
            break;
        }
        if (me > m) {
            verdict = "MLE";  // Memory Limit Exceeded
            break;
        }
        if (di != 0) {
            verdict = "WA";  // Wrong Answer
            break;
        }
    }
    cout << verdict;  // Print the overall verdict
    return 0;
}




// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n, c, m;
//     cin>>n>>c>>m;

//     string verdict = "AC";
//     for (int i = 0; i < n; i++)
//     {
//         int di, cp, me;
//         cin>>di>>cp>>me;

//         if (cp > c) {
//            verdict = "CLE"; 
//            break; 
//         }
//         if (me > m) {
//            verdict = "MLE";
//            break; 
//         }
//         if (di != 0) {
//             verdict = "WA";
//             break;
//         }
//     }
//     cout<<verdict;
    
// }