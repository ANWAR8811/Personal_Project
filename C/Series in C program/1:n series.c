
#include<stdio.h>
int main()
{
    double sum=0,i,n;

    printf("Last number: ");
    scanf("%lf",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + (1/i);

        if(i==1)
            printf("\n1 +%");
        else if(i==n)
            printf("1/%0.0lf",i);
        else
            printf("1/%0.0lf +",i);

    }
    printf(" = %lf",sum);
}
