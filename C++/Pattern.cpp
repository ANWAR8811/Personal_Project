#include<iostream>

using namespace std;

int main() {
    int n, r, c;

    cout<< "Enter a digit: ";
    cin>> n;

    for (r=1; r<=n; r++) {
        for (c=1; c<=r; c++) {
            cout << " " << c ;
        }
        cout<< endl;
    }
}
