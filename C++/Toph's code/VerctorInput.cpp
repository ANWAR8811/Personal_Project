#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> a;
    int numItems;
    std::cout << "Array item's number: ";
    std::cin >> numItems;

    for (int i = 0; i < numItems; i++) {
        std::string item;
        std::cin >> item;
        a.push_back(item);
    }

    for (auto it = a.begin(); it != a.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <string>

// int main() {
//     std::vector<std::string> a;
//     int numItems;
//     std::cout << "Array item's number: ";
//     std::cin >> numItems;

//     for (int i = 0; i < numItems; i++) {
//         std::string item;
//         std::cin >> item;
//         a.push_back(item);
//     }

//     for (std::vector<std::string>::const_iterator it = a.begin(); it != a.end(); ++it) {
//         std::cout << *it << " ";
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main() {
//     vector<string> a;
//     int numItems;
//     cout << "Array item's number: ";
//     cin >> numItems;

//     for (int i = 0; i < numItems; i++) {
//         string item;
//         cin >> item;
//         a.push_back(item);
//     }

//     for (const auto& item : a) {
//         cout << item << " ";
//     }

//     return 0;
// }


