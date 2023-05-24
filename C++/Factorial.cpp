#include <iostream>
using namespace std;

int main()
{
    int n, s=1;
    cin>> n;

    for (int i=n; i>0; i--) {
        s *= i;
        //cout<< i << " ";
        s %= 10000;
    }
    //cout<< "\n" <<s;
    cout<<s;

}
