#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum += i;
        printf("%d %d\n", i, sum);
    }
    printf("summation is %d", sum);
    cout << "The end" << endl;
    return 0;
}