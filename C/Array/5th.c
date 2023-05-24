#include<stdio.h>
int main()
{
    int num[5],i,n,max;

    printf("How many numbers do you want to calculate: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    max = num[0];

    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max = num[i];

    }
    printf("Maximum: %d\n",max);
}
