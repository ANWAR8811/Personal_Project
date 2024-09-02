#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Function to perform the operations on the binary number
void performOperations(const string& binary, const vector<string>& queries) {
    vector<char> bits(binary.begin(), binary.end()); // Convert the binary string to a vector

    int queryNum = 1; // Counter for query number
    for (const auto& query : queries) {
        if (query[0] == 'I') { // Invert operation
            int i, j;
            sscanf(query.c_str(), "%*c %d %d", &i, &j);
            for (int k = i - 1; k < j; ++k) {
                bits[k] = (bits[k] == '0') ? '1' : '0'; // Invert the bits
            }
        } else if (query[0] == 'Q') { // Query operation
            int i;
            sscanf(query.c_str(), "%*c %d", &i);
            cout << (bits[i - 1] == '0' ? 0 : 1);
            if (queryNum != queries.size()) {
                cout << endl; // Print new line after each query result except the last one
            }
        }
        queryNum++;
    }
}

int main() {
    ifstream inputFile("inputBinary.txt"); // Open input file
    if (!inputFile.is_open()) {
        cerr << "Error opening input file!" << endl;
        return 1;
    }

    int T;
    inputFile >> T;

    for (int t = 1; t <= T; ++t) {
        string binary;
        inputFile >> binary;

        int q;
        inputFile >> q;

        inputFile.ignore(); // Ignore the newline after q
        vector<string> queries(q);
        for (int i = 0; i < q; ++i) {
            getline(inputFile, queries[i]);
        }

        cout << "Case " << t << ":" << endl;
        performOperations(binary, queries);
        if (t != T) {
            cout << endl; // Print an extra line between cases
        }
    }

    inputFile.close(); // Close input file
    return 0;
}
