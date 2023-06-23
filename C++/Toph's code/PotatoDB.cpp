#include <iostream>
#include <set>
using namespace std;

int sumDigits(int num) {
    num = abs(num);
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    multiset<int> numbers;

    for (int i = 0; i < n; i++) {
        char query;
        int num;
        cin >> query >> num;

        if (query == 'A') {
            numbers.insert(num);
            cout << numbers.size() << endl;
        }
        else if (query == 'D') {
            auto it = numbers.find(num);
            if (it != numbers.end()) {
                numbers.erase(it);
            }
            cout << numbers.size() << endl;
        }
        else if (query == 'S') {
            int count = 0;
            for (int x : numbers) {
                if (sumDigits(x) == num) {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}




// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> l;
//     for (int i = 0; i < n; i++)
//     {
//         char ch;
//         int v;
//         cin >> ch >> v;

//         if (ch == 'A') {
//             l.push_back(v);
//             cout<<l.size()<<endl;
//         }
//         else if (ch == 'D') {
//             auto j = find(l.begin(), l.end(), v);
//             if (j != l.end()) l.erase(j);
//             cout<<l.size()<<endl;
//         }
//         else if (ch == 'S') {
//             int c = 0;
//             for (int x : l)
//             {
//                 int s = 0;
//                 while (x > 0) {
//                     int r = x % 10;
//                     s += r;
//                     x /= 10;
//                 }
//                 if (s == v) c++;
//             }
//             cout<< c <<endl;
            
//         }
//     }
    
// }



// #include <iostream>

// int main() {
//     auto sum = [](int a, int b) { return a + b; };  // Deduced type: lambda function type
//     int result = sum(3, 5);  // result = 8

//     std::cout << "Result: " << result << std::endl;

//     return 0;
// }
