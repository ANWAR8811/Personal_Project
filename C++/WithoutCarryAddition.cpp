#include <iostream>
using namespace std;

bool hasCarry(int a, int b)
{
    int c = 0;

    while (a > 0 || b > 0)
    {
        int s = (a % 10 + b % 10) + c;
        c = s / 10;
        if (c > 0)
            return false;
        else
        {
            a /= 10;
            b /= 10;
        }
    }
    return true;
}

int main()
{
    int A, B;
    cin >> A >> B;

    if (hasCarry(A, B))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}