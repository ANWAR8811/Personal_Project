
#include<stdio.h>
int main()
{
    int num,sum,temp,rem;

    printf("Enter any number: ");
    scanf("%d",&num);

    temp = num;
    sum = 0;

    while(temp != 0)
    {
        rem = temp%10;
        sum = sum*10+rem;
        temp /= 10;
    }

    printf("The reverse number is: %d\n",sum);
}
