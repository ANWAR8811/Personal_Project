#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> sz(20, 0);
    vector<vector<int>> v(20);
    set<pair<int, int>> st;

    for (int i = 0; i < m; i++) {
        string s, t;
        cin >> s >> t;
        int sIdx = s[0] - 'A';
        int tIdx = t[0] - 'A';
        v[sIdx].push_back(tIdx);
        v[tIdx].push_back(sIdx);
    }

    for (int i = 0; i < n; i++) {
        sz[i] = v[i].size();
        st.insert(make_pair(sz[i], i));
    }

    int i = 1;
    while (!st.empty()) {
        auto it = --st.end();
        pair<int, int> a = *it;
        st.erase(it);
        int b = a.second;
        if (a.first == 0)
            break;
        for (int j = 0; j < v[b].size(); j++) {
            int c = v[b][j];
            it = st.find(make_pair(sz[c], c));
            if (it == st.end())
                continue;
            st.erase(it);
            sz[c]--;
            st.insert(make_pair(sz[c], c));
        }
        sz[b] = 0;
        i++;
    }

    cout << n - i + 1 << endl;

    return 0;
}




// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<char> cards(N);
//     for (int i = 0; i < N; i++) {
//         cin >> cards[i];
//     }

//     vector<pair<char, char> > reactions(M);
//     for (int i = 0; i < M; i++) {
//         cin >> reactions[i].first >> reactions[i].second;
//     }

//     int maxStack = 0;
//     for (int i = 0; i < N; i++) {
//         int count = 1;
//         for (int j = 0; j < M; j++) {
//             if (reactions[j].first == cards[i] || reactions[j].second == cards[i]) {
//                 count = 0;
//                 break;
//             }
//         }
//         maxStack = max(maxStack, count);
//     }

//     cout << maxStack << endl;

//     return 0;
// }
