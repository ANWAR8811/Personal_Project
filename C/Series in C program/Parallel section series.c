#include<stdio.h>
int main()
{
    int n,sum=0,i=1;

    printf("Enter the end number of the series: ");
    scanf("%d",&n);

    printf("1+2+3+......+%d\n",n);

    while(i<=n)
    {
        sum += i;
        i += 1;

    }
    printf("Summation: %d\n",sum);
}
