#include<stdio.h>

union test
{
    int x,y;
};

int main()
{
    union test t1;

    t1.x=10;
    printf("t1.x: %d\n",t1.x);
    printf("t1.y: %d\n",t1.y);

    t1.y=15;
    printf("t1.x: %d\n",t1.x);
    printf("t1.y: %d\n",t1.y);
}

