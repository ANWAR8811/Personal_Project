#include<stdio.h>
int main()
{
    int end,sum=0,i;

    printf("Enter the end number of the series: ");
    scanf("%d",&end);

    printf("1+2+3+......+%d\n",end);

    for(i=1; i<=end; i=i+2)
    {
        sum += i;
    }
    printf("Summation of the series: %d\n",sum);

}
