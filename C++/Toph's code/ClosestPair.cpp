#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int n;
    cin>>n;
    double l = numeric_limits<double>::max();;

    vector<vector<int>> arr(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int a = arr[i][0];
        int b = arr[i][1];
        for (int j = i+1; j < n; j++)
        {
            int c = arr[j][0];
            int d = arr[j][1];

            double r = sqrt(pow(c-a, 2) + pow(d-b, 2));
            // cout<<r<<endl;
            if (l > r) l = r;
        }        
    }
    cout<<l<<endl;
}