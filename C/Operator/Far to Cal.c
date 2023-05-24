
#include<stdio.h>
int main()
{
    float C, F;

    printf("Enter farenheight: ");
    scanf("%f",&F);

    C = (F - 32)/1.8;

    printf("Celcius: %f\n",C);

}
