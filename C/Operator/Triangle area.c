#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Base: ");
    scanf("%f",&base);


    printf("Height: ");
    scanf("%f",&height);

    //printf("Area: ");
    //scanf("%f",&area);

    area = 0.5*(base*height);
    printf("%f\n",area);

}
