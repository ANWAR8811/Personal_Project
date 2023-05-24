
#include<stdio.h>
int main()
{
    int num[5],i,sum=0;

    num[0]=10;
    num[1]=20;
    num[2]=30;
    num[3]=40;
    num[4]=50;

    for(i=0; i<5; i++)
    {
        sum += num[i];
    }
    printf("%d\n",sum);
    printf("%f\n",(float)sum/5);
}
