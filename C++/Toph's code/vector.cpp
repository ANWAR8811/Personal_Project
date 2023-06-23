#include <iostream>
#include <vector>

using namespace std;            // this code doesn't stop🧐

int main() {
    vector<int> arr; // Declare an empty vector

    int value;
    while (cin >> value) {
        arr.push_back(value); // Add the input value to the vector
    }

    // Print the elements of the array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int>arr;

//     int value;
//     while (cin >> value) {
//         arr.push_back(value);
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
    
// }