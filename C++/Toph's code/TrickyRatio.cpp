#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;

    float x  = 2 * M_PI * n;

    float r = x / (2*n);

    cout<<r;
}