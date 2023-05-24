#include<stdio.h>
int main()
{
    double base,exp,res=1,i;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter exponent: ");
    scanf("%lf",&exp);

    for(i=1; i<=exp; i++)
    {
        res *= base;
    }
    printf("Result: %lf\n",res);
}
