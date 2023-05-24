#include<stdio.h>

int square(int a)
{
    return a*a;
}

int main()
{
    int num,res;

    printf("Enter a number: ");
    scanf("%d",&num);

    res = square(num);
    printf("Square value: %d\n",res);
}
