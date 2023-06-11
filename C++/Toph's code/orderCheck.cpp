#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    bool ascending = true;
    for (int i = 1; i < N; ++i) {
        if (A[i] < A[i - 1]) {
            ascending = false;
            break;
        }
    }

    if (ascending) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     int* a = new int[N];

//     for (int i = 0; i < N; i++) {
//         cin >> a[i];
//     }
//     int l = N;
//     cout << "Length: " << l << endl;

//     bool ok = false;
//     for (int i = 0; i < l - 1; i++) {
//         if (a[i] > a[i+1]) {
//             ok = true;
//             break;
//         }
//     }

//     if (!ok) {
//         cout << "Yes";
//     } else {
//         cout << "No";
//     }

//     delete[] a;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     int* a = new int[N];

//     for (int i = 0; i < N; i++) {
//         cin >> a[i];
//     }
//     int l = N;
//     cout << "Length: " << l << endl;

//     int min = a[0];
//     bool ok = false;
//     for (int i = 0; i < l; i++)
//     {
//         if (min < a[i+1]) {
//             min = a[i+1];
//         }
//         else {
//             ok = true;
//             break;
//         }
//     }

//     if (not ok ){
//         cout << "No";
//     }
//     else {
//         cout << "Yes";
//     }
    
//     cout << min;

//     delete[] a;
    
// }