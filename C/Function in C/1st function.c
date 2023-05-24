#include<stdio.h>
int main()
{
    int n1,n2;

    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("Result: %d\n",sum(n1,n2));

}

int sum(int a, int b)
{
    return a+b;
}
