#include <iostream>
#include <set>

using namespace std;        // aita parlam e na ses obdi😑

int main() {
    int N, M;
    cin >> N >> M;

    set<int> a, b;

    // Read the members of the first set
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        a.insert(num);
    }

    // Read the members of the second set
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        b.insert(num);
    }

    // Compute the union of the sets
    set<int> unionSet;
    unionSet.insert(a.begin(), a.end());
    unionSet.insert(b.begin(), b.end());

    // Print the members of the union set
    for (const auto& num : unionSet) {
        cout << num << " ";
    }

    return 0;
}



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<int> a(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }

//     vector<int> b(M);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> b[i];
//     }
    
//     vector<int> arr;
//     int i = 0, j = 0;
//     while (i < N && j < M)
//     {
//         if (a[i] < b[j]) {
//             if (arr.empty() || a[i] != arr.back()) {
//                 arr.push_back(a[i]);
//             }
//             i++;
//         } else if (b[j] < a[i]) {
//             if (arr.empty() || b[j] != arr.back()) {
//                 arr.push_back(b[j]);
//             }
//             j++;
//         } else {
//             if (arr.empty() || a[i] != arr.back()) {
//                 arr.push_back(a[i]);
//             }
//             i++;
//             j++;
//         }
//     }

//     while (i < N) {
//         if (arr.empty() || a[i] != arr.back()) {
//             arr.push_back(a[i]);
//         }
//         i++;
//     }

//     while (j < M) {
//         if (arr.empty() || b[j] != arr.back()) {
//             arr.push_back(b[j]);
//         }
//         j++;
//     }

//     for (const auto& f: arr) {
//         cout << f << " ";
//     }
    
//     return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<int> a(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }

//     vector<int> b(M);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> b[i];
//     }
    
//     vector<int> arr;
//     int i = 0, j = 0;
//     while (i < N && j < M)
//     {
//         if (a[i] < b[j]) {
//             arr.push_back(a[i]);
//             i++;
//         } else {
//             arr.push_back(b[j]);
//             j++;
//         }
//     }

//     while (i < N) {
//         arr.push_back(a[i]);
//         i++;
//     }

//     while (j < M) {
//         arr.push_back(b[j]);
//         j++;
//     }

//     for (const auto& f: arr) {
//         cout << f << " ";
//     }
    
//     return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     int a[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }

//     int b[M];
//     for (int i = 0; i < M; i++)
//     {
//         cin >> b[i];
//     }
    
//     vector<int>arr;
//     int i = 0, j = 0;
//     for (int k = 0; k < (N+M); k++)
//     {
//         if (a[i] < b[j]) {
//             arr.push_back(a[i]);
//             i++;
//         } else {
//             arr.push_back(b[j]);
//             j++;
//         }
//     }

//     for (const auto& f: arr) {
//         cout << f << " ";
//     }
// }