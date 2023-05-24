#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int n1,n2,res;

    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    res = sum(n1,n2);
    printf("Result: %d\n",res);

}

