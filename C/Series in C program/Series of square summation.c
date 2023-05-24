
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("last number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i*i;

    }
    printf("Summation of square: %d ",sum);

}
