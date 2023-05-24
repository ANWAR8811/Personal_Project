
#include<stdio.h>
int main()
{
    int n,i,row,col;

    printf("Enter n: \n");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            printf("*");
        }
        printf("\n");
    }

}
