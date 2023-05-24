#include<iostream>
using namespace std;

template <class mT>

mT add(mT a, mT b)
{
    return a + b;
}

int main()
{

    cout<< add(19,2) << endl;
    cout<< add(17.5,2.2) << endl;
}
