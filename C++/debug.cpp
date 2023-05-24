#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int carry = 0;
    int sum = a + b;

    while (sum > 9)
    {
        carry = sum / 10;
        sum %= 10;
    }

    if (carry > 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
