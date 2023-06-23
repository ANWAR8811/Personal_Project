// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     cin.ignore();

//     string a;
//     getline(cin, a);

//     for (int i = 0; i < a.length(); i++) {
//         char c = a[i];
//         int askv = static_cast<int>(c);
//         char askch;

//         if (askv == 32) { // Check for space character
//             askch = static_cast<char>(askv);
//         } else if (askv >= 97 && askv <= 122) { // Check if lowercase letter
//             int shifted = askv - n;

//             if (shifted < 97) {
//                 shifted += 26; // Wraparound to the end of the lowercase letters range
//             }

//             askch = static_cast<char>(shifted);
//         } else {
//             askch = static_cast<char>(askv); // Preserve non-lowercase characters
//         }

//         cout << askch;
//     }

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();

    string a;
    getline(cin, a);

    for (int i = 0; i < a.length(); i++)
    {
        char c = a[i];
        int askv = static_cast<int>(c);
        char askch;
        if (askv == 32) {
            askch = static_cast<char>(askv);
        }
        else if (askv >= 97 && askv <= 122) {
            int r = askv - n;
            if (r < 97) {
                r += 26;
            }
            askch = static_cast<char>(r);
        } else {
            askch = static_cast<char>(askv);
        }
        cout<< askch;
    }
    
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string a = "Hello dunia!";

//     for (int i = 0; i < a.length(); i++)
//     {
//         char c = a[i];
//         int askv = static_cast<int>(c);
//         cout << "ASCII value of '" << c << "' is: " << askv << endl;
//     }
    
// }


// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Hello";
    
//     for (int i = 0; i < str.length(); i++) {
//         std::cout << str[i] << " ";
//     }
//     std::cout << std::endl;
//     std::cout << str[str.length()-1];
    
//     return 0;
// }
