#include<stdio.h>

double tarea(double a,b)
{
    //res = 1/2*a*b;
    return 0.5*a*b;
}

int main()
{
    double base,height,res;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter height: ");
    scanf("%lf",&height);

    res = tarea(base,height);
    printf("Trinangle area: %lf\n",res);
}

