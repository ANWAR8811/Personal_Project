#include<iostream>

using namespace std;

void display(int *n)
{
    *n = 20;
}

int main()
{
    int x = 10;

    cout<< "Before pass: " << x <<endl;

    display(&x);
    cout<< "After pass: " << x << endl;
}
