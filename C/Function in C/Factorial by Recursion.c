#include<stdio.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int res;

    res = fact(4);
    printf("Factorial: %d\n",res);
}
