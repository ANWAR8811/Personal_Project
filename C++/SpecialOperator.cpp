#include<iostream>

using namespace std;
int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    int c = sizeof(a);
    cout<< c <<endl;

    int b = sizeof(f);
    cout<< b <<endl;

    int s = sizeof(d);
    cout<< s <<endl;

    int y = sizeof(ch);
    cout<< y <<endl;

    int w = sizeof(name);
    cout<< w <<endl;



    int m,n,sum;

    sum = (m=30, n=20, sum=m+n);

    cout<< sum<<endl ;
}




