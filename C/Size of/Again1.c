#include<stdio.h>
int main()
{
    char lower,upper;

    printf("Enter any lower case: ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("Uppercase letter: %c",upper);


}


