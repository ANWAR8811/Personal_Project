#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int arr[N];
    cin>> N;
    cin>> arr[N];
    int narr[N];

    for (int i = 0; i < N; i++) {
        narr[N-1-i] = arr[i];
    }
    cout<< narr[N] <<endl;
    return 0;
}

