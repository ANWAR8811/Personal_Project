// #include <iostream>
// #include <array>

// int main() {
//     int n, r;
//     std::cin >> n;

//     std::array<int, 10> a={};
//     while (n > 0) {
//         r = n % 10;
//         n /= 10;

//         if (n == 0) a[0] += 1;
//         else if (n == 1) a[1] += 1;
//         else if (n == 2) a[2] += 1;
//         else if (n == 3) a[3] += 1;
//         else if (n == 4) a[4] += 1;
//         else if (n == 5) a[5] += 1;
//         else if (n == 6) a[6] += 1;
//         else if (n == 7) a[7] += 1;
//         else if (n == 8) a[8] += 1;
//         else if (n == 9) a[9] += 1;
//     }

//     for (int i = 0; i < a.size(); i++) {
//         std::cout << a[i] << " ";
//     }

//     return 0;
// }




// #include <iostream>
// #include <array>
// using namespace std;

// int main() {
//     int n, r;
//     cin>>n;

//     array<int, 10> a{};
//     while (n > 0) {
//         r = n % 10;
//         n /= 10;

//         if (n==0) a[0] += 1;
//         else if (n==1) a[1] += 1;
//         else if (n==2) a[2] += 1;
//         else if (n==3) a[3] += 1;
//         else if (n==4) a[4] += 1;
//         else if (n==5) a[5] += 1;
//         else if (n==6) a[6] += 1;
//         else if (n==7) a[7] += 1;
//         else if (n==8) a[8] += 1;
//         else if (n==9) a[9] += 1;
//     }

//     for (int i = 0; i < a.size(); i++)
//     {
//         cout<< a[i] << " ";
//     }
    
// }


#include <iostream>
#include <array>
using namespace std;

int main() {
    int n, r;
    cin>>n;

    array<int, 10> a = {};
    while (n > 0) {
        r = n % 10;
        n /= 10;
        a[r] += 1;
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout<< a[i] << " ";
    }
    
}