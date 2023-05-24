
#include<stdio.h>
int main()
{
    int num, sum, temp, rem;

    printf("Enter any number: ");
    scanf("%d", &num);

    sum = 0;
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("The summation of the digits is: %d\n",sum);


}
