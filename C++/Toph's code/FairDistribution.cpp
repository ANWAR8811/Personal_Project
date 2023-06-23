#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin>> x >> y;

    int e = y % x;
    int ed = x - e;
    cout<<ed;
}