
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="Rana Ahamed",s2[20]="Rana Ahamed";

    int d = strcmp(s1,s2);

    if(d==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}
