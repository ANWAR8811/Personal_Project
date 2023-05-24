#include<iostream>

using namespace std;

int addition(int a, int b);

int main() {
    int r = addition(20, 30);
    cout<< r;
}

int addition(int a, int b) {
    int sum = a + b;
    return sum;
}
