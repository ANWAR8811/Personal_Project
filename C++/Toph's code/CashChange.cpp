// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> a;
//     while (n >= 1) {  // Modified condition: exit the loop when n < 1
//         if (n >= 500) {
//             n = n - 500;
//             a.push_back(500);
//         }
//         else if (n >= 100) {
//             n = n - 100;
//             a.push_back(100);
//         }
//         else if (n >= 50) {
//             n = n - 50;
//             a.push_back(50);
//         }
//         else if (n >= 10) {
//             n = n - 10;
//             a.push_back(10);
//         }
//         else if (n >= 5) {
//             n = n - 5;
//             a.push_back(5);
//         }
//         else if (n >= 1) {
//             n = n - 1;
//             a.push_back(1);
//         }
//     }

//     for (int i = a.size() - 1; i >= 0; i--) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    while (n >= 1) {
        if (n >= 500) {
            n = n - 500;
            a.push_back(500);
        }
        else if (n >= 100) {
            n = n - 100;
            a.push_back(100);
        }
        else if (n >= 50) {
            n = n - 50;
            a.push_back(50);
        }
        else if (n >= 10) {
            n = n - 10;
            a.push_back(10);
        }
        else if (n >= 5) {
            n = n - 5;
            a.push_back(5);
        }
        else if (n >= 1) {
            n = n - 1;
            a.push_back(1);
        }
    }

    for (int i = a.size()-1; i >= 0; i--)
    {
        cout<< a[i] << " ";
    }
    
}