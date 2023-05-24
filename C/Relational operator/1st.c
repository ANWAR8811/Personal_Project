
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("Even\n");

    if(num%2 != 0)
        printf("Odd\n");



}
