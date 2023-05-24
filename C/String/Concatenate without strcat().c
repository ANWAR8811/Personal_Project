#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "Rana";
    char str2[20] = " Ahamed";

    int i,len,j;
    i = 0;
    len = 0;

    while(str1[i]!='\0')
    {
        len++;
        i++;
    }

    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }

    printf("str1 = %s\n",str1);
}
//hoy ni

