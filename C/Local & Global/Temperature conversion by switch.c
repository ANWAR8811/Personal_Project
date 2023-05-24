#include<stdio.h>
int main ()
{
    int choice;
    float temp, con_temp;

    printf("Temperature conversion menu: \n");
    printf("1. Fahrenheit to Celsius: \n");
    printf("2. Celsius to Fahrenheit: \n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter the Fahrenheit temp: ");
            scanf("%f",&temp);
            con_temp = (temp -32)/1.8;
            printf("The temp in Celsius: %f\n",con_temp);
            break;

        }

    case 2:
        {
            printf("Enter the Celsius temp: ");
            scanf("%f",&temp);
            con_temp = (temp*1.8)+132;
            printf("The temp in Fahrenheit: %f\n",con_temp);
            break;
        }
    default:
        printf("Not a correct input");
    }
}
