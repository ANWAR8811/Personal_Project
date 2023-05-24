
#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,res;

    printf("Enter last digit: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even += i;
        else
            odd += i;

    }
    //res = odd - even;

    printf("Result= %d",odd-even);
}


