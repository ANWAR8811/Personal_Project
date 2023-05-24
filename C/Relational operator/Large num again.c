
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);

    if(num1>num2)
        printf("Large : %d",num1);

    else if(num1 == num2)
        printf("Input numbers are eqaul");

    else
        printf("Large : %d",num2);


}
