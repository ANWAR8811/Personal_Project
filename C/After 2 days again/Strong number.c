#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,fact,i;

    printf("Enter an integer: ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp%10;

        fact = 1;

        for(i=1; i<=rem; i++)
        {
            fact = fact*i;
        }
        sum+= fact;
        temp /= 10;
    }

    if(sum==num)
        printf("%d is a STRONG numnber",num);

    else
        printf("%d is not a STRONG numnber",num);
}
