#include <iostream>
#include <string>

using namespace std;

int main() {
    string A = "unsophisticated";
    // cin >> A;
    A[0] = toupper(A[0]);

    for (int i = 0; i < A.length(); i++) {
        if (A[i] == 'i') {
            A[i] = '!';
        } else if (A[i] == 'o') {
            A.replace(i, 1, "()");
            i++; // Increment i by 1 to skip the added '(' character
        } else if (A[i] == 's') {
            A[i] = '$';
        }
    }
    char d = '.';
    A.append(1, d);

    cout << A;
    return 0;
}



// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
// 	string A = "unsophisticated";
// 	// cin >> A;
// 	A[0] = toupper(A[0]);

//     for (int i = 0; i < A.length(); i++)
//     {
//         if (A[i] == 'i') {
//             A[i] = '!';
//         }
//         else if (A[i] == 'o') {
//             A[i] = '(';
//         }
//         else if (A[i] == 's') {
//             A[i] = '$';
//         }
//     }
//     char d = '.';
//     A.append(1,d);
    
//     cout << A;
// 	return 0;
// }


// #include <iostream>
// #include <string>

// int main() {
//     std::string input;
//     std::cout << "Enter a string: ";
//     std::getline(std::cin, input);

//     if (input[0] >= 'a' && input[0] <= 'z') {
//         input[0] -= 32;
//     }

//     std::cout << "Modified string: " << input << std::endl;

//     return 0;
// }



// #include <iostream>
// #include <cctype> // For toupper()

// using namespace std;

// string capitalizeFirstLetter(string str) {
//     if (!str.empty()) {
//         str[0] = toupper(str[0]);
//     }
//     return str;
// }

// int main() {
//     string word;
//     cout << "Enter a word: ";
//     cin >> word;

//     string capitalized = capitalizeFirstLetter(word);

//     cout << "Capitalized word: " << capitalized << endl;

//     return 0;
// }
