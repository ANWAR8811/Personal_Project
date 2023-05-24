
// It just works for 3 digits

#include<stdio.h>
#include<math.h>

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
        sum = sum+pow(rem,3);
        temp /= 10;
    }

    if(num == sum)
        printf("Armstrong number");

    else
        printf("Not an armstrong number");

}

