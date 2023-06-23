#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n;
    cin>>n;

    int n2;
    n2 = n;

    if (n2 % 10 != 0) {
        n2 = n2 - n2 % 10;
    }

    n2 = n2 / 10;

    cout << "[";
    for (int i = 1; i <= 10; i++)
    {
        if (i <= n2) {
            cout<< "+";
        }
        else {
            cout << ".";
        }
    }

    cout<< "]";
    cout<< trunc(n) << "%\n"; 
    
}




// #include <iostream>
// #include <cmath>

// int main()
// {
//     double num;
//     int num2;
//     std::cin >> num;
//     num2 = num;
//     if (num2 % 10 != 0) {
//         num2 = num2 - num2 % 10;
//     }
//     num2 = num2 / 10;
//     std::cout << "[";
//     for (int i = 1; i <= 10; i++) {
//         if (i <= num2) {
//             std::cout << "+";
//         } else {
//             std::cout << ".";
//         }
//     }
//     std::cout << "] ";
//     std::cout << std::trunc(num) << "%\n";
//     return 0;
// }





// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;

// int main() {
//     float n;
//     int m, t;
//     cin>>n;

//     string a, s = "";
//     m = n/10;
//     for (int i = 0; i < 12; i++)
//     {
//         if (i==0) {
//             s = s + "[";
//         }
//         else if (i==11) {
//             s = s + "]";
//         }
//         else if (i<m+1) {
//             s = s + "+";
//         }
//         else {{
//             s = s + ".";
//         }}
//     }
//     t = round(n);
//     cout<<t<<endl;
//     a = s + " " + to_string(t) + "%";
//     cout<<a;
    
// }