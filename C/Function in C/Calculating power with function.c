
#include<stdio.h>

void cal_pow(double a,b)
{
    double res=1,i;
    for(i=1; i<=b; i++)
    {
        res *= a;
    }
    printf("Result: %lf\n",res);
}

int main()
{
    double base,exp;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter exponent: ");
    scanf("%lf",&exp);

    cal_pow(base,exp);
}
