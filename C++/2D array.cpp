#include<iostream>

using namespace std;

int main() {
    int n;

    cout<< "Number of row and columns of an array: ";
    cin>> n;

    int marks[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<< i << j << " position's number: ";
            cin>> marks[i][j];
        }
    }

    cout<< "Numbers are: " << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<< marks[i][j] << " ";
        }
        cout<< endl;
    }

}
