#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "Rana";
    char str2[20] = " Ahamed";
    //s1[] = "Rana";
    //s2[] = "Ahamed";

    strcat(str1,str2);

    printf("str1 = %s\n",str1);
}
