#include<iostream>

using namespace std;

int main() {
    int n;

    cout<< "Number of elements of an array: ";
    cin>> n;

    int marks[n];

    for (int i=0; i<n; i++) {
        cout<< i+1 << " number student's number: ";
        cin>> marks[i];
    }

    cout<< "Marks are: ";
    for (int i=0; i<n; i++) {
        cout<< marks[i] << " ";
    }
}

