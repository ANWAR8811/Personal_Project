#include<stdio.h>
int main()
{
    char x[100],y[100];
    int i,k=0,c;
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]=='@')
           c=i;
    }
    for(i=c+1;x[i]!='\0';i++)
    {
        y[k]=x[i];
        k++;
    }
    y[k]='\0';
    printf("%s",y);
    return 0;

}
