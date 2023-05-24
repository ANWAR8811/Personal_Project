#include<iostream>
using namespace std;

template <class mT, class mT1>

mT1 add(mT a, mT1 b)
{
    return a + b;
}

int main()
{

    cout<< add(19,2) << endl;
    cout<< add(17.5,2) << endl;
}
