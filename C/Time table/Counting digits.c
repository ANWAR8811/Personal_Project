
#include<stdio.h>
int main()
{
    int num,count;

    printf("Enter any number: ");
    scanf("%d",&num);

    count = 0;

    while(num != 0)
    {
        num = num/10;
        ++count;
    }

    printf("Total number of digits: %d\n",count);
}
