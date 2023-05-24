
#include<stdio.h>
int main()
{
    int num[5],i,sum=0,n;

    printf("How many numbers do you want to calculate: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n; i++)
    {
        sum += num[i];
    }
    printf("%d\n",sum);
    printf("%f\n",(float)sum/n);
}
