#include<stdio.h>
int main()
{
    int f=0,s=1,count=0,fibo,n;

    printf("Enter range: ");
    scanf("%d",&n);

    while(count<n)
    {
        if(fibo == n)
            break;
        else
        {


            if(count<=1)
                fibo = count;
            else
            {
                fibo = f + s;
                f = s;
                s = fibo;
            }
            printf("%d ",fibo);
            count++;
        }
    }
}
