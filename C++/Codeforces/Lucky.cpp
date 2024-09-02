#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int i;
        cin >> i;

        // Convert the integer to a string
        string ticket = to_string(i);

        // Pad the string with leading zeroes until it has six digits
        while (ticket.length() < 6) {
            ticket = "0" + ticket;
        }

        // Convert characters to integers before comparison
        int sum_first_half = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
        int sum_second_half = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

        // Check if the sums are equal
        if (sum_first_half == sum_second_half) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         string ticket;
//         cin >> ticket;

//         // Extract the digits from the ticket string
//         int sum_first_half = (ticket[0] - '0') + (ticket[1] - '0') + (ticket[2] - '0');
//         int sum_second_half = (ticket[3] - '0') + (ticket[4] - '0') + (ticket[5] - '0');

//         // Check if the sums are equal
//         if (sum_first_half == sum_second_half) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
