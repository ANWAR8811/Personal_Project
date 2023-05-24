#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r;
    cin >> r;

    for (int i = 0; i < r; i++)
    {
        int c = 1;

        for (int j = 0; j < r; j++)
        {
            cout << setw(3) << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << setw(6) << c;
            c = c * (i - k) / (k + 1);
        }
        cout << endl;
    }
}