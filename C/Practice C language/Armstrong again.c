
//Have to work on it again

#include<stdio.h>
#include<math.h>

int main()
{
    int num,sum,temp,rem,count,n;

    printf("Enter any number: ");
    scanf("%d",&num);

    temp = num;
    sum = 0;
    count = 0;

    while(num != 0)
    {
        num = num/10;
        ++count;
    }

    n = count;



    while(temp != 0)
    {
        rem = temp%10;
        sum = sum+pow(rem,n);
        temp /= 10;
    }

    if(num == sum)
        printf("Armstrong number");

    else
        printf("Not an armstrong number");

}
