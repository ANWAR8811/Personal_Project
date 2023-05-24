
#include<stdio.h>
int main()
{
    int num, i, fact=1;

    printf("Enter any positive number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        fact *= i;

    }
    printf("%d's Factorial is: %d\n",num,fact);


}
