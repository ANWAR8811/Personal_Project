#include<iostream>
using namespace std;

int main()
{
    try
    {
        int a, b;

        cin>> a >> b;

        if (b==0)
        {
            throw -1;
        }

        double res = (double) a / b;
        cout<< res << endl;
    }
    catch(int x)
    {
        cout<< "Divided by is not possible";
    }
 }
