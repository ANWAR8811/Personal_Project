#include <iostream>
using namespace std;

int main() {
    int n, s, e;
    cin>>n>>s>>e;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int sum=0;
    for (int i = s; i < e+1; i++)
    {
        sum = sum+a[i];
    }
    cout<<sum;
    
    
}