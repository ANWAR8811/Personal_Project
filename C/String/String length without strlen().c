
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="MD. ANWAR HOSSAIN";
    int i=0,len=0;

    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length: %d\n",len);
}
