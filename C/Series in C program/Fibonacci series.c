#include<stdio.h>
int main()
{
    int i,n,n1=0,n2=1,temp,sum=0;

    printf("Enter the last digit of the series: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        if(n2==n)
            break;
        else
        {
            if(i==n1)
                printf("\n0 1 ");
            else
            {
                sum = n1 + n2;
                printf("%d ",sum);
                n1 = n2;
                n2 = sum;
                sum = 0;
            }
        }
    }


}
