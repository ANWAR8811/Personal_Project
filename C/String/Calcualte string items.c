#include<stdio.h>
int main()
{
    char str[50];
    int i,c,s,d;
    i=c=s=d=0;

    printf("Enter a string: ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            c++;
        else if(str[i]>=97 && str[i]<=122)
            s++;
        else if(str[i]>=48 && str[i]<=57)
            d++;

        i++;
    }

    printf("Number of capital letter = %d\n",c);
    printf("Number of small letter = %d\n",s);
    printf("Number of digits = %d\n",d);



}
