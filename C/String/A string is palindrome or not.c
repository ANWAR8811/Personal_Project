#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="madam", s2[30];

    int i=0, len=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
        int j;
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("Stirng1 = %s\n",s1);
    printf("Stirng2 = %s\n",s2);

    int d = strcmp(s1,s2);
    if(d==0)
        printf("The string is palindrome");
    else
        printf("The string is not palindrome");
}

