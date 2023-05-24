#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int factorial = 1;

    // Calculate factorial of N
    for (int i = 2; i <= N; i++)
    {
        factorial *= i;
        // Keep only the last 4 digits
        factorial %= 10000;
    }

    cout << factorial << endl;

    return 0;
}
