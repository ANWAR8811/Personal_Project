
#include<stdio.h>
int main()
{
    int num1= 10, num2= 20, temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Number1: %d\n",num1);
    printf("Number2: %d\n",num2);


}
