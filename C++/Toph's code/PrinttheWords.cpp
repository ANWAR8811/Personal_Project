// #include <iostream>
// #include <string>
// #include <map>
// #include <climits>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int tt = 1;
//     while (tt--) {
//         string s;
//         getline(cin, s);
//         s += "_";
//         int cnt = 0;
//         int len = s.size();
//         int mx = 0;
//         int mn = INT_MAX;
//         map<string, int> p;
//         int l = 0;
//         string sr = "";
//         for (int i = 0; i < len; i++)
//         {
//             if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
//                 cnt++;
//                 if (s[i] >= 'A' && s[i] <= 'Z') {
//                     sr += s[i] + 32;
//                 }
//                 else {
//                     sr += s[i];
//                 }
//             }
//             else if (cnt > 0) {
//                 mx = max(mx, cnt);
//                 mn = min(mn, cnt);
//                 p[sr]++;
//                 l = max(l, p[sr]);
//                 cnt = 0;
//                 sr = "";
//             }
//         }

//         sr = "";
//         for (int i = 0; i < len; i++)
//         {
//             if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
//                 sr += s[i];
//             }
//             else if (mx == sr.size()) {
//                 cout << sr << endl;
//                 break;
//             }
//             else {
//                 sr = "";
//             }
//         }
        
//         sr = "";
//         for (int i = 0; i < len; i++)
//         {
//             if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
//                 sr = s[i];
//             }
//             else if (mn == sr.size()) {
//                 cout << sr << endl;
//             }
//             else {
//                 sr = "";
//             }
//         }
        
//         sr = "";
//         string st = "";
//         for (int i = 0; i < len; i++)
//         {
//             if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
//                 if (s[i] >= 'A' && s[i] <= 'Z') {
//                     sr += s[i] + 32;
//                 }
//                 else {
//                     sr += s[i];
//                 }
//                 sr += s[i];
//             }
//             else if (p[sr] == 1) {
//                 cout << st << endl;
//                 break;
//             }
//             else {
//                 sr = "";
//                 sr + "";
//             }
//         }
        
//     }
//     return 0;
// }



#include <iostream>
#include <string>
#include <map>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt = 1;
    while (tt--) {
        string s;
        getline(cin, s);
        s += "_";
        int cnt = 0;
        int len = s.size();
        int mx = 0;
        int mn = INT_MAX;
        map<string, int> p;
        int l = 0;
        string sr = "";
        for (int i = 0; i < len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                cnt++;
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    sr += s[i] + 32;
                } else {
                    sr += s[i];
                }
            } else if (cnt > 0) {
                mx = max(mx, cnt);
                mn = min(mn, cnt);
                p[sr]++;
                l = max(l, p[sr]);
                cnt = 0;
                sr = "";
            }
        }

        sr = "";
        for (int i = 0; i < len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                sr += s[i];
            } else if (mx == sr.size()) {
                cout << sr << "\n";
                break;
            } else {
                sr = "";
            }
        }

        sr = "";
        for (int i = 0; i < len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                sr += s[i];
            } else if (mn == sr.size()) {
                cout << sr << "\n";
                break;
            } else {
                sr = "";
            }
        }

        sr = "";
        string st = "";
        for (int i = 0; i < len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    sr += s[i] + 32;
                } else {
                    sr += s[i];
                }
                st += s[i];
            } else if (p[sr] == l) {
                cout << st << "\n";
                break;
            } else {
                sr = "";
                st = "";
            }
        }
    }

    return 0;
}




// #include <iostream>
// #include <string>
// #include <unordered_map>
// #include <sstream>
// #include <vector>

// int main() {
//     std::string input;
//     std::getline(std::cin, input);

//     std::istringstream iss(input);
//     std::vector<std::string> words;
//     std::string word;

//     while (iss >> word) {
//         // Remove punctuation at the end of the word
//         if (word.back() == '.' || word.back() == ',' || word.back() == ';') {
//             word = word.substr(0, word.length() - 1);
//         }
//         words.push_back(word);
//     }

//     std::string longestWord = words[0];
//     std::string shortestWord = words[0];
//     std::unordered_map<std::string, int> wordCounts;
//     wordCounts[words[0]] = 1;

//     for (const std::string& word : words) {
//         if (word.length() > longestWord.length()) {
//             longestWord = word;
//         }
//         if (word.length() < shortestWord.length()) {
//             shortestWord = word;
//         }

//         if (wordCounts.find(word) == wordCounts.end()) {
//             wordCounts[word] = 1;
//         } else {
//             wordCounts[word]++;
//         }
//     }

//     int maxCount = 0;
//     std::string mostRepeatedWord = words[0];

//     for (const auto& entry : wordCounts) {
//         if (entry.second > maxCount) {
//             maxCount = entry.second;
//             mostRepeatedWord = entry.first;
//         }
//     }

//     std::cout << longestWord << std::endl;
//     std::cout << shortestWord << std::endl;
//     std::cout << mostRepeatedWord << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <unordered_map>
// #include <sstream>

// std::string getFirstWord(const std::string& text) {
//     std::istringstream iss(text);
//     std::string word;
//     iss >> word;
//     return word;
// }

// std::string normalizeWord(const std::string& word) {
//     std::string normalized;
//     for (char c : word) {
//         normalized += std::tolower(c);
//     }
//     return normalized;
// }

// int main() {
//     std::string text;
//     std::getline(std::cin, text);

//     std::unordered_map<std::string, int> wordCounts;
//     std::string longestWord, shortestWord, mostRepeatedWord;
//     int maxCount = 0;

//     std::istringstream iss(text);
//     std::string word;
//     while (iss >> word) {
//         std::string normalizedWord = normalizeWord(word);
//         if (wordCounts.find(normalizedWord) == wordCounts.end()) {
//             wordCounts[normalizedWord] = 1;
//         } else {
//             wordCounts[normalizedWord]++;
//         }

//         if (word.length() > longestWord.length()) {
//             longestWord = word;
//         }

//         if (shortestWord.empty() || word.length() < shortestWord.length()) {
//             shortestWord = word;
//         }

//         if (wordCounts[normalizedWord] > maxCount) {
//             maxCount = wordCounts[normalizedWord];
//             mostRepeatedWord = word;
//         }
//     }

//     std::cout << longestWord << std::endl;
//     std::cout << shortestWord << std::endl;
//     std::cout << getFirstWord(mostRepeatedWord) << std::endl;

//     return 0;
// }
