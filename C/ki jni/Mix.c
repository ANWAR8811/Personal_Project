
#include<stdio.h>
int main()
{
    int num1;
    float num2;
    printf("Enter two integers: ");
    scanf("%d %f",&num1,&num2);
   // scanf("%d",&num2);

    printf("Numbers are: %d, %.3f\n",num1,num2);
    return 0;
}
