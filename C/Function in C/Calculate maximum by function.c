#include<stdio.h>

int maximum(int a[])
{
    int i,max=a[0];
    for(i=0; i<4; i++)
    {
        if(max<a[i])
            max = a[i];
    }
    return max;
}

int main()
{
    int num[]= {10,23,45,67},max;
    max = maximum(num);

    printf("Maximum value: %d\n",max);
}

