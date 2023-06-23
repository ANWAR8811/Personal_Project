#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    int c1=0,c2=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='(') c1++;
        else if (s[i]==')') c2++;
    }
    if (c1==c2) cout<<"Yes";
    else cout<<"No";
    
}