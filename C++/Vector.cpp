#include<bits/stdc++.h>

using namespace std;

void print(vector<int> arr)
{
    cout<< "Total elements: " << arr.size() << endl;
    for (int iarr:arr) {
        cout<<iarr<< " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     vector <int> arr = {1,2,3};
    arr.push_back(4);
    print(arr);
    return 0;
}
