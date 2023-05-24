#include<iostream>
using namespace std;

int main()
{
    int y;

    cout<< "Enter any year: ";
    cin>> y;

    if (y%4==0 && y%100!=0)
    {
        cout<< "Leap year";
    }
    else if (y%400==0)
    {
        cout<< "Leap year";
    }
    else
    {
        cout<< "Not Leap year";
    }
}
